"""Small lexical index for preprocessed C definitions and diagnostic literals."""
import re
TOKEN=re.compile(r'^[ \t]*\#[^\n]*|/\*.*?\*/|//[^\n]*|(?:u8|L|u|U)?"(?:\\.|[^"\\])*"|(?:L|u|U)?\'(?:\\.|[^\'\\])*\'|[A-Za-z_][A-Za-z_0-9]*|(?:0[xX][0-9A-Fa-f]+|[0-9]+)[uUlL]*|[^\s]',re.MULTILINE|re.DOTALL)
IGNORE={'__attribute__','__declspec','__asm__','asm','__typeof__','typeof','int','long','short','unsigned','signed','void','char','float','double'}
DIAGNOSTICS={'ERR_put_error':4,'CRYPTO_malloc':2,'CRYPTO_malloc_locked':2,'CRYPTO_realloc':3,'CRYPTO_realloc_clean':4,'OPENSSL_die':2}
def index(source):
    tokens=[]
    for m in TOKEN.finditer(source):
        if m[0].startswith(('#','/*','//')):continue
        tokens.append((m[0],m.start(),m.end()))
    pairs={};stack=[]
    for n,(t,_,__)in enumerate(tokens):
        if t in ('(','[','{'):stack.append(n)
        elif t in (')',']','}'):
            if not stack:raise ValueError('Unbalanced C tokens')
            start=stack.pop();pairs[start]=n;pairs[n]=start
    if stack:raise ValueError('Unclosed C token group')
    functions={};segment=0;n=0
    while n<len(tokens):
        t,begin,end=tokens[n]
        if t=='{':
            close=pairs[n];header=tokens[segment:n];name=None
            if not any(t[0]=='='for t in header):
                for k in range(segment,n):
                    if tokens[k][0]=='('and k>segment and re.fullmatch('[A-Za-z_][A-Za-z_0-9]*',tokens[k-1][0])and tokens[k-1][0]not in IGNORE:name=tokens[k-1][0];break
            if name:
                body=tokens[n:close+1];calls=[]
                for k in range(n+1,close):
                    callee=tokens[k][0]
                    if callee not in DIAGNOSTICS or tokens[k+1][0]!='(':continue
                    call_end=pairs[k+1];args=[];p=k+2;start=p
                    while p<call_end:
                        if tokens[p][0]in ('(','[','{'):p=pairs[p]+1;continue
                        if tokens[p][0]==',':args.append(tokens[start:p]);start=p+1
                        p+=1
                    args.append(tokens[start:call_end]);arg=DIAGNOSTICS[callee]
                    if arg<len(args)and len(args[arg])==1 and re.fullmatch('[0-9]+[uUlL]*',args[arg][0][0]):
                        token=args[arg][0];calls.append(dict(callee=callee,value=int(token[0].rstrip('uUlL')),start=token[1],end=token[2]))
                functions[name]=dict(name=name,body_start=end,body_end=tokens[close][1],start=tokens[segment][1],end=tokens[close][2],diagnostics=calls,has_inline_asm=any(t[0]in ('asm','__asm__')for t in body))
                segment=close+1
            n=close+1;continue
        if t==';':
            # Old-style C definitions declare named parameters between the
            # closing signature parenthesis and the body. Their semicolons
            # belong to the same definition, rather than ending a prototype.
            old_style=False
            for k in range(segment,n):
                if (tokens[k][0]!='('or k==segment or tokens[k-1][0]in IGNORE
                    or not re.fullmatch('[A-Za-z_][A-Za-z_0-9]*',tokens[k-1][0])):continue
                close=pairs[k]
                parameters=[v[0]for v in tokens[k+1:close]]
                names=parameters[::2]
                if (close+1<n and re.fullmatch('[A-Za-z_][A-Za-z_0-9]*',tokens[close+1][0])
                    and tokens[close+1][0]not in {'__attribute__','__declspec','__asm__'}
                    and names and len(parameters)==2*len(names)-1
                    and all(re.fullmatch('[A-Za-z_][A-Za-z_0-9]*',name)and name not in IGNORE for name in names)
                    and all(value==','for value in parameters[1::2])):
                    old_style=True
                break
            if not old_style:segment=n+1
        n+=1
    return functions
def add_side_effect(source,functions):
    positions=sorted({f['body_start']for f in functions.values()},reverse=True)
    for position in positions:source=source[:position]+' LeafAddedSideEffect(); '+source[position:]
    return 'extern void LeafAddedSideEffect(void);\n'+source

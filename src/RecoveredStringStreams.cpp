#include <sstream>
#include <ostream>
template class std::basic_stringstream<char>;
template class std::basic_stringbuf<char>;
void AppendStreamText(std::ostream& stream,const char* text){stream<<text;}

// SPTG::Enemy (vtable 0x187d618) as far as the enemy states use it. Every
// regular enemy class derives from it and appends its own states after slot
// 233, each followed by a getter that returns it. Names are provisional.
#pragma once
#include "OnyxComponents.h"
#include "StateMachine.h"

extern "C" float Move_FrameDelta;   // seconds since the last frame (0x1924d70)

namespace SPTG {

struct BaseCharacter;
// One of the enemy's attack descriptors (0x78 bytes each, from +0xba8).
struct EnemyAttack { char data[0x78]; };

#define SPTG_SLOT(n) virtual void Slot##n();
struct Enemy {
    typedef StateMachine<Enemy>::State State;
    virtual ~Enemy();                                                          // slots 0, 1
    SPTG_SLOT(2) SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9)
    SPTG_SLOT(10) SPTG_SLOT(11) SPTG_SLOT(12) SPTG_SLOT(13) SPTG_SLOT(14) SPTG_SLOT(15) SPTG_SLOT(16) SPTG_SLOT(17)
    SPTG_SLOT(18) SPTG_SLOT(19) SPTG_SLOT(20) SPTG_SLOT(21)
    virtual void PlayAnimation(int animation, int a, int b, float speed);  // slot 22
    SPTG_SLOT(23) SPTG_SLOT(24) SPTG_SLOT(25) SPTG_SLOT(26)
    virtual bool AnimationDone();                                          // slot 27
    SPTG_SLOT(28) SPTG_SLOT(29) SPTG_SLOT(30) SPTG_SLOT(31) SPTG_SLOT(32) SPTG_SLOT(33) SPTG_SLOT(34) SPTG_SLOT(35)
    SPTG_SLOT(36) SPTG_SLOT(37) SPTG_SLOT(38) SPTG_SLOT(39) SPTG_SLOT(40) SPTG_SLOT(41) SPTG_SLOT(42) SPTG_SLOT(43)
    virtual void StartAttack(EnemyAttack* attack, bool flag, int source, BaseCharacter* attacker); // slot 44
    SPTG_SLOT(45) SPTG_SLOT(46) SPTG_SLOT(47) SPTG_SLOT(48) SPTG_SLOT(49) SPTG_SLOT(50) SPTG_SLOT(51) SPTG_SLOT(52)
    SPTG_SLOT(53) SPTG_SLOT(54) SPTG_SLOT(55) SPTG_SLOT(56) SPTG_SLOT(57) SPTG_SLOT(58) SPTG_SLOT(59) SPTG_SLOT(60)
    SPTG_SLOT(61) SPTG_SLOT(62) SPTG_SLOT(63) SPTG_SLOT(64) SPTG_SLOT(65) SPTG_SLOT(66) SPTG_SLOT(67) SPTG_SLOT(68)
    SPTG_SLOT(69) SPTG_SLOT(70) SPTG_SLOT(71) SPTG_SLOT(72) SPTG_SLOT(73) SPTG_SLOT(74) SPTG_SLOT(75) SPTG_SLOT(76)
    SPTG_SLOT(77) SPTG_SLOT(78) SPTG_SLOT(79) SPTG_SLOT(80) SPTG_SLOT(81) SPTG_SLOT(82) SPTG_SLOT(83) SPTG_SLOT(84)
    SPTG_SLOT(85) SPTG_SLOT(86) SPTG_SLOT(87) SPTG_SLOT(88) SPTG_SLOT(89) SPTG_SLOT(90) SPTG_SLOT(91) SPTG_SLOT(92)
    SPTG_SLOT(93) SPTG_SLOT(94) SPTG_SLOT(95)
    virtual int State96(int event);                                        // slot 96
    virtual State State96Ptr();                                            // slot 97
    SPTG_SLOT(98) SPTG_SLOT(99) SPTG_SLOT(100) SPTG_SLOT(101) SPTG_SLOT(102) SPTG_SLOT(103) SPTG_SLOT(104) SPTG_SLOT(105)
    SPTG_SLOT(106) SPTG_SLOT(107) SPTG_SLOT(108) SPTG_SLOT(109) SPTG_SLOT(110) SPTG_SLOT(111) SPTG_SLOT(112) SPTG_SLOT(113)
    SPTG_SLOT(114) SPTG_SLOT(115) SPTG_SLOT(116) SPTG_SLOT(117) SPTG_SLOT(118) SPTG_SLOT(119) SPTG_SLOT(120) SPTG_SLOT(121)
    SPTG_SLOT(122) SPTG_SLOT(123) SPTG_SLOT(124) SPTG_SLOT(125) SPTG_SLOT(126) SPTG_SLOT(127) SPTG_SLOT(128) SPTG_SLOT(129)
    SPTG_SLOT(130) SPTG_SLOT(131) SPTG_SLOT(132) SPTG_SLOT(133) SPTG_SLOT(134) SPTG_SLOT(135) SPTG_SLOT(136) SPTG_SLOT(137)
    SPTG_SLOT(138) SPTG_SLOT(139) SPTG_SLOT(140) SPTG_SLOT(141) SPTG_SLOT(142) SPTG_SLOT(143) SPTG_SLOT(144) SPTG_SLOT(145)
    SPTG_SLOT(146) SPTG_SLOT(147) SPTG_SLOT(148) SPTG_SLOT(149) SPTG_SLOT(150) SPTG_SLOT(151) SPTG_SLOT(152) SPTG_SLOT(153)
    SPTG_SLOT(154) SPTG_SLOT(155) SPTG_SLOT(156) SPTG_SLOT(157) SPTG_SLOT(158) SPTG_SLOT(159) SPTG_SLOT(160) SPTG_SLOT(161)
    SPTG_SLOT(162) SPTG_SLOT(163) SPTG_SLOT(164) SPTG_SLOT(165) SPTG_SLOT(166) SPTG_SLOT(167) SPTG_SLOT(168) SPTG_SLOT(169)
    SPTG_SLOT(170) SPTG_SLOT(171) SPTG_SLOT(172) SPTG_SLOT(173) SPTG_SLOT(174) SPTG_SLOT(175) SPTG_SLOT(176) SPTG_SLOT(177)
    SPTG_SLOT(178) SPTG_SLOT(179)
    virtual int State180(int event);                                       // slot 180
    virtual State State180Ptr();                                           // slot 181
    SPTG_SLOT(182) SPTG_SLOT(183) SPTG_SLOT(184) SPTG_SLOT(185) SPTG_SLOT(186) SPTG_SLOT(187) SPTG_SLOT(188) SPTG_SLOT(189)
    SPTG_SLOT(190) SPTG_SLOT(191) SPTG_SLOT(192) SPTG_SLOT(193) SPTG_SLOT(194) SPTG_SLOT(195) SPTG_SLOT(196) SPTG_SLOT(197)
    SPTG_SLOT(198) SPTG_SLOT(199) SPTG_SLOT(200) SPTG_SLOT(201) SPTG_SLOT(202) SPTG_SLOT(203) SPTG_SLOT(204) SPTG_SLOT(205)
    SPTG_SLOT(206) SPTG_SLOT(207) SPTG_SLOT(208) SPTG_SLOT(209) SPTG_SLOT(210) SPTG_SLOT(211) SPTG_SLOT(212) SPTG_SLOT(213)
    SPTG_SLOT(214) SPTG_SLOT(215) SPTG_SLOT(216) SPTG_SLOT(217) SPTG_SLOT(218) SPTG_SLOT(219) SPTG_SLOT(220) SPTG_SLOT(221)
    SPTG_SLOT(222) SPTG_SLOT(223) SPTG_SLOT(224) SPTG_SLOT(225) SPTG_SLOT(226) SPTG_SLOT(227) SPTG_SLOT(228) SPTG_SLOT(229)
    SPTG_SLOT(230) SPTG_SLOT(231) SPTG_SLOT(232) SPTG_SLOT(233)

    char padding_8[0x200];
    StateMachine<Enemy> states;   // +0x208
    char padding_230[0x580];
    float stateTime;              // +0x7b0: time spent in the current state
    char padding_7b4[0x3f4];
    EnemyAttack attacks[7];       // +0xba8
};
static_assert(__builtin_offsetof(Enemy, states) == 0x208, "Enemy states");
static_assert(__builtin_offsetof(Enemy, stateTime) == 0x7b0, "Enemy state time");
static_assert(__builtin_offsetof(Enemy, attacks) == 0xba8, "Enemy attacks");

}  // namespace SPTG

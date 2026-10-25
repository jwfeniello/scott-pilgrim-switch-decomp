// A release-mode assertion form: the expression is evaluated, calls in it
// stay, and the optimizer may assume it holds. The random generator's unlock
// (Random.h) matches only with this form, which keeps its thread ID calls.
#pragma once

#define SPTG_ASSERT(condition) do { if (!(condition)) __builtin_unreachable(); } while (0)

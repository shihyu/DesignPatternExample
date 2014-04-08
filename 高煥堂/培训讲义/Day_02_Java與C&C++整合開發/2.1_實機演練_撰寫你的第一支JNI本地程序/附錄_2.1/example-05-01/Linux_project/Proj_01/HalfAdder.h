/*  HalfAdder.h   */
#ifndef HA_H
#define HA_H
#include "lw_oopc.h"
CLASS(HalfAdder) {
    int a, b, carry, sum;
    void (*set_digits)(void *, int, int);
    void (*run)(void *);
    int (*get_carry)(void *);
    int (*get_sum)(void *);
};
#endif

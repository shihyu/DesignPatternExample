/*    HalfAdder.c    */
#include "HalfAdder.h"
static void set_ab(void *t, int a, int b) {
    HalfAdder* cthis = (HalfAdder*)t;
    cthis-> a = a;    cthis-> b = b;
}
static void calc(void* t) {
    HalfAdder* cthis = (HalfAdder*)t;
    cthis->carry = cthis->a & cthis->b;    
    cthis->sum = cthis->a ^ cthis->b;  }
static int get_carry(void* t)
     {  HalfAdder* cthis = (HalfAdder*)t;
        return cthis->carry; }
static int get_sum(void* t)
     {  HalfAdder* cthis = (HalfAdder*)t; 
        return cthis->sum; }
CTOR(HalfAdder)
    FUNCTION_SETTING(set_digits, set_ab)
    FUNCTION_SETTING(run, calc)
    FUNCTION_SETTING(get_carry, get_carry)
    FUNCTION_SETTING(get_sum, get_sum)
END_CTOR

/*  lw_oopc.h */
/* 這就MISOO團隊所設計的C巨集*/
#ifndef LOOPC_H
#define LOOPC_H
#include <malloc.h>
#define CLASS(type)\
    typedef struct type type; \
    struct type

#define CTOR(type) \
    void* type##New() \
    { \
        struct type *t; \
        t = (struct type *)malloc(sizeof(struct type));

#define CTOR2(type, type2) \
    void* type2##New() \
    { \
        struct type *t; \
        t = (struct type *)malloc(sizeof(struct type));

#define END_CTOR return (void*)t;  };
#define FUNCTION_SETTING(f1, f2)  t->f1 = f2;
#define IMPLEMENTS(type) struct type type
#define INTERFACE(type) struct type
#endif
/*     end     */

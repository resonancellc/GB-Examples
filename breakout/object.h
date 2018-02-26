#ifndef _Object_H
#define _Object_H
#include "vector.h"


typedef void (*drawable)(void *);

typedef struct {
    Vector location;
    int width;
    int height;
    drawable draw;
} Object;




#endif

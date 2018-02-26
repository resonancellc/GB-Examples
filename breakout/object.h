#ifndef _Object_H
#define _Object_H
#include "vector.h"

typedef struct {
    Vector location;
    int width;
    int height;
} Object;

void draw_obj(Object *obj);
#endif

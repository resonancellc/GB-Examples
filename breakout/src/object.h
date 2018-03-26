#ifndef _Object_H
#define _Object_H
#include "vector.h"

typedef enum {PLAYER, BALL, BLOCK} ObjectType;

typedef struct {
    Vector location;
    Vector velocity;
    int width;
    int height;
    ObjectType type;
} Object;



void init_obj_sprite(Object *obj, int id);
void update_obj_sprite(Object *obj, int id);
void update_obj(Object *obj);
#endif

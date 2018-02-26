#include "ball.h"
#include <gb/drawing.h>

void init_ball(Object *obj) {
    obj->location.x = 75;
    obj->location.y = 60;
    obj->width = 5;
    obj->height = 5;
}

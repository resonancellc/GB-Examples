#include "object.h"
#include <gb/drawing.h>

void draw_obj(Object *obj) {
    int x = obj->location.x;
    int y = obj->location.y;
    int x2 = x + obj->width;
    int y2 = y + obj->height;

    box(x, y, x2, y2, 1);
}

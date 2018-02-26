#include "player.h"
#include <gb/drawing.h>

void init_player(Object *obj) {
    obj->location.x = 60;
    obj->location.y = 130;
    obj->width = 40;
    obj->height = 5;
}

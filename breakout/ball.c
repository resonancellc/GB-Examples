#include "ball.h"
#include <gb/gb.h>
#include "./graphics/sprites.h"

void init_ball(Object *obj) {
    obj->location.x = 75;
    obj->location.y = 60;
    obj->width = 8;
    obj->height = 8;
    obj->type = BALL;
}

void init_ball_sprite(Object *obj, int id) {
    set_sprite_data(id, ball_size, sprites_data);
    set_sprite_tile(id, ball_offset);
    move_sprite(id, obj->location.x, obj->location.y);
}

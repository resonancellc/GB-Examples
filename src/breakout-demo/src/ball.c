#include "ball.h"
#include <gb/gb.h>
#include "./graphics/sprites.h"

void init_ball(Object *obj) {
    obj->location.x = 75;
    obj->location.y = 60;
    obj->velocity.x = 0;
    obj->velocity.y = 0;
    obj->width = 8;
    obj->height = 8;
    obj->type = BALL;
}

void init_ball_sprite(Object *obj, int id) {
    set_sprite_data(id, ball_size, sprites_data);
    set_sprite_tile(id, ball_offset);
    update_ball_sprite(obj, id);
}

void update_ball_sprite(Object *obj, int id) {
    move_sprite(id, obj->location.x, obj->location.y);
}

void update_ball(Object *obj) {
    obj->location.x += obj->velocity.x;
    obj->location.y += obj->velocity.x;

    if (obj->location.x > SCREENWIDTH + 8 - obj->width || 
        obj->location.x < 0 + 8) {
        obj->velocity.x = obj->velocity.x * -1;
    }

    if (obj->location.y < SCREENHEIGHT + 8 || obj->location.y < 0 + 8 + obj->height) {
        obj->velocity.y = obj->velocity.y * -1;
    }
}


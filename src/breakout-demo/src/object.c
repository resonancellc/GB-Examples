#include "object.h"
#include "ball.h"
#include "player.h"

void init_obj_sprite(Object *obj, int id) {
    if (obj->type == BALL) {
        init_ball_sprite(obj, id);
    } else if (obj->type == PLAYER) {
        init_player_sprite(obj, id);
    }
}

void update_obj_sprite(Object *obj, int id) {
    if (obj->type == BALL) {
        update_ball_sprite(obj, id);
    } else if (obj->type == PLAYER) {
        update_player_sprite(obj, id);
    }
}

void update_obj(Object *obj) {
    if (obj->type == BALL) {
        update_ball(obj);
    } 
}

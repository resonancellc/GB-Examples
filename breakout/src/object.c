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

void update_obj_sprite(Object *obj) {
    obj->location.x = 1;
}

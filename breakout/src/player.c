#include "player.h"
#include <gb/gb.h>
#include "./graphics/sprites.h"

void init_player(Object *obj) {
    obj->location.x = 60;
    obj->location.y = 150;
    obj->width = 32;
    obj->height = 8;
    obj->type = PLAYER;
}

void init_player_sprite(Object *obj, int id) {
    set_sprite_data(id, sprites_size, sprites_data);
    set_sprite_tile(id, 3);
    set_sprite_tile(id + 1, 4);
    set_sprite_tile(id + 2, 4);
    set_sprite_tile(id + 3, 5);
    move_sprite(id, obj->location.x, obj->location.y);
    move_sprite(id + 1, obj->location.x  + 8, obj->location.y);
    move_sprite(id + 2, obj->location.x + 16, obj->location.y);
    move_sprite(id + 3, obj->location.x + 24, obj->location.y);
}

#ifndef _Player_H
#define _Player_H
#include "object.h"
void init_player(Object *obj);
void init_player_sprite(Object *obj, int id);
void update_player_sprite(Object *obj, int id);

void move_player(Object *obj, int amount);
#endif

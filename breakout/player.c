#include "player.h"
#include <gb/drawing.h>

void draw_player(Object *player) {
    int x = player->location.x;
    int y = player->location.y;
    int x2 = x + player->width;
    int y2 = y + player->height;

    box(x, y, x2, y2, 1);
}

void draw(void *p) {
    draw_player(&p);
}

void init_player(Object *obj) {
    obj->location.x = 100;
    obj->location.y = 100;
    obj->width = 40;
    obj->height = 10;
    obj->draw = draw;
}

#include <gb/gb.h>
#include <stdio.h>
#include "sprites.c"

struct Box {
   int    size;
   int    x;
   int    y;
   int    vx;
   int    vy;
};

void updatePoint(struct Box *b) {
    b->x += b->vx;
    b->y += b->vy;

    if (b->x > SCREENWIDTH - b->size || b->x < 0) {
        b->vx = b->vx * -1;
    }

    if (b->y > SCREENHEIGHT || b->y < 0 + b->size) {
        b->vy = b->vy * -1;
    }
}

void main() {
    struct Box b = {8, 50, 50, 1, 1};

    // init sprite stuff
    set_sprite_data(0, sprite_size, sprite_data);
    set_sprite_tile(0,0);
    move_sprite(0, 8, 8);

    SHOW_SPRITES;

    while (!0) {
        set_sprite_tile(0, 0);
        set_sprite_prop(0,0);
        move_sprite(0, b.x + b.size, b.y + b.size);
        updatePoint(&b);
        wait_vbl_done();
    }
}

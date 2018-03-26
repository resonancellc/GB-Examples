#include <gb/gb.h>
#include "player.h"
#include "ball.h"
#include "object.h"

Object player;
Object ball;


void draw() {
        init_obj_sprite(&ball, 0);
        init_obj_sprite(&player, 2);
}

void main() {
        SPRITES_8x8;
        init_player(&player);
        init_ball(&ball);
        SHOW_SPRITES;

        draw();
       
        
}

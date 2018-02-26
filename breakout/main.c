#include <gb/gb.h>
#include "player.h"
#include "ball.h"

Object player;
Object ball;


void draw() {
        draw_obj(&player);
        draw_obj(&ball);
}

void main() {
        //box(20, 20, 40, 40, 1);
        init_player(&player);
        init_ball(&ball);
        draw();

        
}

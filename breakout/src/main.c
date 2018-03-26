#include <gb/gb.h>
#include "player.h"
#include "ball.h"
#include "object.h"

Object player;
Object ball;


void init_sprites() {
    init_obj_sprite(&ball, 0);
    init_obj_sprite(&player, 2);
}

void draw() {
    update_obj_sprite(&ball, 0);
    update_obj_sprite(&player, 2);
}

void update() {
    update_obj(&ball);
}

void input() {
	if(joypad()==J_RIGHT) {
        move_player(&player, 1);
    }

    if(joypad()==J_LEFT) {
        move_player(&player, -1);
    }
		
}

void main() {
    init_player(&player);
    init_ball(&ball);
    init_sprites();
    
    SHOW_SPRITES;

    ball.velocity.x = 1;
    ball.velocity.y = 2;

    while (!0) {
        draw();
        update();
        input();
        wait_vbl_done();
    }
}

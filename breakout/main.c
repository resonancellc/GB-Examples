#include <gb/gb.h>
#include "player.h"

void main() {
        //box(20, 20, 40, 40, 1);
        Object player;
        init_player(&player);
        player.draw();
}

#include <gb/gb.h>
#include <stdio.h>

void main()
{
        printf("Press Start\nto continue");
        waitpad(J_START);  // other keys are J_A, J_UP, J_SELECT, etc.
        printf("\n\nHello World!");
}

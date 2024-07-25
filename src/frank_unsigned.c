#include <stdio.h>

int main(void) {

    short short_number = 100;
    unsigned short screen_width = 800;
    unsigned short screen_height = 600;
    unsigned short x = 400;
    unsigned short y = 300;

    printf("short_number: %hd, hexadecimal: %#X\n", short_number, short_number);
    printf("The screen resolution is %hux%hu.\n", screen_width, screen_height);
    printf("The current position is (%hu, %hu).\n", x, y);

    return 0;
}

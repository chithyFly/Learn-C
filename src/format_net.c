#include <stdio.h>

int main(void) {

    int a = 15;
    int b = a/2;
    
    printf("b: %d| %%d\n", b);
    printf("b: %3d| %%3d\n", b);
    printf("b: %03d| %%03d\n", b);

    float c = 15.3;
    float d = c/3;

    printf("\n");
    printf("d: %03.2f| with %%03.2f\n", d);
    return 0;
}

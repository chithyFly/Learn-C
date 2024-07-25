#include <stdio.h>

#define WIDTH_SEPECIFICATION 6

int main(void) {

    int int_number = 123;
    int neg_int_number = -100;
    float float_number = 33.33F;

    printf("int_number: %06d\n", int_number);
    printf("int_number: %-06d| with - flag\n", int_number);
    printf("int_number: %0*d with * width specification\n", WIDTH_SEPECIFICATION, int_number);

    printf("\n");
    printf("neg_int_number: %6d\n", neg_int_number);
    printf("neg_int_number: %+06d with + flag\n", neg_int_number);

    printf("\n");
    printf("int_number: %o\n", int_number);
    printf("int_number: %#o\n", int_number);

    printf("\n");
    printf("int_number: %x\n", int_number);
    printf("int_number: %X\n", int_number);
    printf("int_number: %#X\n", int_number);

    printf("\n");
    printf("float_number: %06f\n", float_number);
    printf("float_number: %06e with %%e format print\n", float_number);
    return 0;
}

#include <stdio.h>

int main(void) {

    int int_number = 0xCAFEBABE;
    short short_number = int_number;
    char char_number = int_number;

    printf("int_number = %#x(%zu %s)\n", int_number, sizeof(int), sizeof(int)>1 ? "bytes" : "byte");
    printf("int_number = %#x(%zu %s)\n", short_number, sizeof(short), sizeof(short)>1 ? "bytes" : "byte");
    printf("int_number = %#x(%zu %s)\n", char_number, sizeof(char), sizeof(char)>1 ? "bytes" : "byte");
    return 0;
}

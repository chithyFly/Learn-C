#include <stdio.h>
#include <stdbool.h>

int main(void) {

    printf("The size of bool: %zu %s.\n", sizeof(bool), (sizeof(bool) <= 1) ? "byte" : "bytes");
    printf("The size of char: %zu %s.\n", sizeof(char), (sizeof(char) <= 1) ? "byte" : "bytes");
    printf("The size of short: %zu %s.\n", sizeof(short), (sizeof(short) <= 1) ? "byte" : "bytes");
    printf("The size of int: %zu %s.\n", sizeof(int), (sizeof(int) <= 1) ? "byte" : "bytes");
    printf("The size of long: %zu %s.\n", sizeof(long), (sizeof(long) <= 1) ? "byte" : "bytes");
    printf("The size of long long: %zu %s.\n", sizeof(long long), (sizeof(long long) <= 1) ? "byte" : "bytes");
    printf("The size of float: %zu %s.\n", sizeof(float), (sizeof(float) <= 1) ? "byte" : "bytes");
    printf("The size of double: %zu %s.\n", sizeof(double), (sizeof(double) <=1) ? "byte" : "bytes");
    return 0;
}

#include <stdio.h>

int main(void) {

    char string[] = "Hello, world!";

    printf(":123456789012345:\n");
    printf(":%s:\n", string);
    printf(":%15s:\n", string);
    printf(":%-15s:\n", string);
    printf(":%.10s:\n", string);
    printf(":%-10s:\n", string);
    printf(":%.15s:\n", string);
    printf(":%15.10s:\n", string);
    printf(":%-15.10s:\n", string);
    return 0;
}

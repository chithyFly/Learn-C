#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>

int main(void) {
    int age = 20;
    bool has_identical = true;

    if (age >= 18 and has_identical) {
        printf("Age more than 18 and have ID card, you could play league of legends game.\n");
    } else {
        printf("Fail to match play game condition. Couldn't play league of legends");
    }

    return 0;
}

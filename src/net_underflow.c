#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool is_add_underflow(int a, int x);
bool is_sub_underflow(int a, int x);
bool is_mul_underflow(int a, int x);
bool is_div_underflow(int a, int x);

int main(void) {

    int int_number = INT_MAX;
    int operand = -2;
    int result = 0;

    result = int_number * operand;

    printf("%d = %d * %d => result = int_number * operand\n", result, int_number, operand);
    if (__builtin_mul_overflow(int_number, operand, &result)) {
        printf("Underflow\n");
    } else {
        printf("Normal operation\n");
    }

    return 0;
}

bool is_add_underflow(int a, int x) {
    return (x < 0 && a < INT_MIN - x) ? true : false;
}
bool is_sub_underflow(int a, int x) {
    return (x > 0 && a < INT_MIN + x) ? true : false;
}
bool is_mul_underflow(int a, int x) {
    if (a > 0) {
        if (x < 0 && x < INT_MIN / a) {
            return true;
        }

    } else {
        if (x > 0 && a < INT_MIN / x) {
            return true;
        }
    }
    return false;
}
bool is_div_underflow(int a, int x) {
    return false;
}

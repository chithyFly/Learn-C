#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

bool is_add_overflow(int a, int b);
bool is_sub_overflow(int a, int b);
bool is_mul_overflow(int a, int b);
bool is_div_overflow(int a, int b);

int main(void) {

    int int_number = INT_MIN;
    int operand = 1;
    int operate_result = int_number / operand;

    if (is_sub_overflow(int_number, operand)) {
        printf("operate_result: %d\n", operate_result);
    } else {
        printf("operate_result: %d\n", operate_result);
    }
    return 0;
}

bool is_add_overflow(int a , int b) {
    return (b > 0 && a > INT_MAX - b) ? true : false;
}

bool is_sub_overflow(int a , int b) {
    return (b < 0) && (a > INT_MAX + b) ? true : false;
}

bool is_mul_overflow(int a , int b) {
    return (b > 0 && a > INT_MAX / b) ? true : false;
}

bool is_div_overflow(int a , int b) {
    return (b == -1) && (a == INT_MIN) ? true : false;
}

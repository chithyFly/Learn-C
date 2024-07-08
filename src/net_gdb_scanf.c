#include <stdio.h>

int main(void) {

    int age = 0;
    char character = '\0';
    double distance = 0;

    printf("What's your age: ");
    scanf("%d", &age);
    printf("What's your first character of you name: ");
    scanf(" %c", &character);
    printf("What's distance do you walk: ");
    scanf("%ld", &distance);

    printf("age = %d, character = %c, distance = %d\n", age, character, distance);
    return 0;
}

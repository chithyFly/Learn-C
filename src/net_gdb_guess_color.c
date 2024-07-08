#include <stdio.h>
#include <string.h>

#define MAX_BUFFER_SIZE 255
#define MAX_STRING_SIZE 127
int main(char agrc, char* agrv) {

    char guess_color[MAX_STRING_SIZE] = "";
    char favourite_color[MAX_STRING_SIZE] = "hot pink";
    int guess_times = 0;

    printf("What's your favourite color: ");
    fgets(guess_color, MAX_STRING_SIZE, stdin);
    guess_times += 1;
    while (strncmp(guess_color, favourite_color, strlen(favourite_color)) != 0) {
        printf("Guess error, try again\n");
        printf("What's your favourite color: ");
        fgets(guess_color, MAX_STRING_SIZE, stdin);
        guess_times += 1;
    }
    printf("Your favourite color is '%s'\n.", favourite_color);

    return 0;
}

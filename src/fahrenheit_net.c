#include <stdio.h>

int main(void) {
    
    for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20) {
        printf("%3d %06.3f\n", fahrenheit, (5.0F/9.0F)*(fahrenheit-32));
    }
    return 0;
}

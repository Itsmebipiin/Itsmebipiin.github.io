#include <stdio.h>

float convertemp(float celsius);

int main () {
    float fahrenheit = convertemp(37);
    printf("\nFahrenheit = %.2f\n", fahrenheit);

    return 0;

}

float convertemp(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

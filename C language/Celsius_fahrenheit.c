#include <stdio.h> // Include standard input-output header file

int main() {
    // Declare variables for Celsius and Fahrenheit temperatures
    float celsius; // Hard-coded Celsius temperature
    float fahrenheit;
    printf("Enter temperature in Celius : ");
    scanf("%f",&celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display the converted temperature
    printf("\n%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0; // Return 0 to indicate successful execution
}
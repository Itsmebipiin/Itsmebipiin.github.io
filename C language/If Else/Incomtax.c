#include <stdio.h>

int main() {
    float salary, tax;

    // Taking input for the salary
    printf("Enter your annual salary in Lakhs (L): ");
    scanf("%f", &salary);

    // Calculate tax based on the salary slabs
    if (salary > 10.0) {
        tax = 0.30 * salary;
    } else if (salary > 5.0) {
        tax = 0.20 * salary;
    } else if (salary > 2.5) {
        tax = 0.05 * salary;
    } else {
        tax = 0.0;  // No tax if salary is 2.5L or below
    }

    // Display the tax to be paid
    printf("The income tax to be paid is: %.2fL\n", tax);

    return 0;
}
#include <stdio.h>

void Calculateprice(float n);

int main () {
    float n = 100.00;
    
     printf("\nValue is %.2f", n);


     Calculateprice(n);


    return 0;
}

void Calculateprice(float n) {
    n = n + (0.18 * n);
    printf("\nFinal price is = %.2f\n", n);
}

#include <stdio.h>

void Calculateprice(float n);

int main () {
    float n;
    
     printf("Enter a value : ");
     scanf("%f", &n);


     Calculateprice(n);


    return 0;
}

void Calculateprice(float n) {
   return  n + (0.18 * n);
    printf("\nFinal price is = %f\n");
}

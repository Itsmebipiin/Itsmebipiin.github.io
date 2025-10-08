#include<stdio.h>
int main () {

    int p,r,t;

    printf("\nEnter Amount : ");
    scanf("%d", &p);
    printf("\nEnter Time : ");
    scanf("%d", &t);
    printf("\nEnter Rate : ");
    scanf("%d", &r);

    float SI = (p*r*t)/100;

    printf("\nSimple intrest =  %.2f", SI);

    float A = SI + p;

    printf("\nTotal Amount = %.2f", A);

    return 0;
}
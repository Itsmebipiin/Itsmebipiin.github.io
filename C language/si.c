#include<stdio.h>
int main ()
{
    int p,t,r;
    float si,A;
    printf("\nEnter Principle : ");
    scanf("%d",&p);
    printf("Enter Time : ");
    scanf("%d",&t);
    printf("Enter Rate : ");
    scanf("%d",&r);
    si = (p*t*r)/100;
    printf("\nSimple intrest is : %.2f",si);
    A = si + p;
    printf("\nTotal Amount is : %.2f",A);
    return 0;
}
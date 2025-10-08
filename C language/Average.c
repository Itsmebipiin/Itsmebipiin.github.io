#include <stdio.h>

int main() {

float  a,b,c;

printf("Enter a number ");
scanf("%f", &a);
printf("Enter a number ");
scanf("%f", &b);
printf("Enter a number ");
scanf("%f", &c);

float Average = (a+b+c)/3;
printf("%.2f", Average);

return 0;
}
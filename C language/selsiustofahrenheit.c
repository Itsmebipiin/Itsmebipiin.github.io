#include<stdio.h>
int main()
{
float F,C;
printf("\nEnter temperature in Celsius : ");
scanf("%f",&C);
F = (C*9/5)+32;
printf("\n\nTemperature in fahrenheit is : %.2f",F);
    return 0;
}
#include <stdio.h>
int main () {

    float Wh, v;
    float mAh;

    printf("\nEnter battery capacity watt hour (wh) : ");
    scanf("%f", &Wh);

    printf("\nEnter Voltage of a battery (V) : ");
    scanf("%f", &v);

    mAh = (Wh*1000)/v;

    printf("\n%.2f\n", mAh);

    return 0;
}
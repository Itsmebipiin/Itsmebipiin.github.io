#include <stdio.h>
int main () {

    int x = 10;
    int  p = &x;
    int *p;
    int **q;

    printf("\n%d", x);
    printf("\n%d", &x);
    printf("\n%d", p);
    printf("\n%u",x);
    printf("\n%u", **q);


    return 0;
}
#include <stdio.h>
int main () {

    int a[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%u\n", *a);

    printf("%d\n", *a[0]);
    printf("%d\n", **a);

    

    return 0;
}
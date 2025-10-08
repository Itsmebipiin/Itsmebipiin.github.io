#include<stdio.h>

int add(int n) {
    int sum = 0;

    for(int i=1; i<=n; i++) {

        sum = sum + i * i; 
    }

    return sum;
}

int main () {
    int n;

    printf("\nEnter a no of elements : ");
    scanf("%d", &n);

     int result = add(n);

    printf("Sum of squre from 1 to %d = %d  \n", n, result);

    return 0;
}
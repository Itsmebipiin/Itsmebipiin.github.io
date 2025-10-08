#include<stdio.h>

int main () {

    int arr[100], n;
    int sum = 0, product = 1;

    printf("\nEnetr No of Elements : ");
    scanf("%d", &n);

    printf("\nEnter %d Elements : \n", n);
    for(int i = 0; i < n;  i++) {
        scanf("%d", &arr[i]);
    }

   for(int i = 0; i < n;  i++) {
       sum += arr[i];
       product *= arr[i];

    }

    printf("\nSum of %d elements = %d", n, sum);
    printf("\nProduct of %d elements = %d\n", n, product);

    
    return 0;

}
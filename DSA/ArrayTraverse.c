#include<stdio.h>

int main () {
    int arr[100], n;

    printf("\nEnter The No Of Elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    } 

    // Traversing an Array
    printf("\nThe Array Elements Are : \n");
    for(int i = 0; i < n; i++) {
        printf("\narr[%d] = %d\n", i, arr[i]);
    }

    return 0;

}
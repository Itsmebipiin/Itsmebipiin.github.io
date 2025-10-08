#include<stdio.h>

int main () {
    int arr[100], n, temp;

    printf("\nEnetr Number of elements : ");
    scanf("%d", &n);

    printf("\nEnter %d elements : \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("\nArray after swapping 1st and last elements : ");
    for(int i = 0; i < n; i++) {
        printf("\n%d ", arr[i]);
    }


    return 0;

}
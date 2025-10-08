#include<stdio.h>

int main () {

    int n,i, j, temp;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Elements : ");
    for(i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted Order : ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

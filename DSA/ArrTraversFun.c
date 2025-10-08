#include<stdio.h>

void traverseArray(int arr[], int n) {
    printf("\nThe array elements are : ");
    for(int i =0; i < n; i++) {
        printf("\narr[%d] = %d\n", i, arr[i]);
    }
}

int main () {

    int arr[100], n;

    printf("\nEnetr the No of elements : ");
    scanf("%d", &n);

    printf("\nEnetr %d Elements : \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    traverseArray(arr, n);

    return 0;
}
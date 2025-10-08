#include <stdio.h>

int main () {
    int arr[100], n, i; 
    int min, minIndex;

    printf("\nEnter Number of Elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }

    min = arr[0];
    minIndex = 0;

    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;

        }
    }

    printf("\nThe Lowest Number is %d at Index %d. \n", min, minIndex);

    return 0; 

}
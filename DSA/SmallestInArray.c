#include <stdio.h>
#include <limits.h>  // for INT_MAX

int main () {

    int arr[10] = {};

    printf("\nEnter Elements of array : ");

    for (int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX;

    for(int i=0; i<10; i++){
        if(arr[i] < smallest) {
           smallest = arr[i];
        }
    }

    printf("\nSmallest = %d", smallest );

    return 0;
}
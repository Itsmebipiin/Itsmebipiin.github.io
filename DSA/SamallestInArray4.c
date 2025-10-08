#include <stdio.h>
#include <limits.h>  // for INT_MAX

int main () {

    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("\nEnter Elements of array : ");

    for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("\nSmallest = %d", smallest);

    return 0;
}
#include<stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key )
        return i;

    }
    return -1;

}

int main () {

    int arr[100], size, key;

    printf("\nEnter the no of element : ");
    scanf("%d", &size);

    printf("\nEnter the %d elements : ", size);
    for(int i =0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search : ");
    scanf("%d", &key);

    int result = linearSearch(arr, size, key);

    if( result != -1) 
       printf("\nElement %d is found at index %d \n", key, result);
    else 
       printf("\nElement %d is not fount in array \n", key);

       return 0; 
    
}

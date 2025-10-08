// reverse of an Array 

#include<stdio.h>

int main () {
    int size; 
    printf("\nEnter The Size Of Array : ");
    scanf("%d", &size);
    int arr[size];
    int start = 0, end = size-1;


    printf("Enetr the elements of array : "); 
        for(int i=0; i<size; i++) {
            scanf("%d", &arr[i]);
        
    }

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end--;
    }
    
    printf("\nReverse Array is = ");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}
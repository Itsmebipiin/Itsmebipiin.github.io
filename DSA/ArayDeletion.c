#include<stdio.h>

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {

        printf("\n%d", arr[i]);
    }
    printf("\n"); 

}

void indDeletion(int arr[], int size, int index) {

    for( int i = index; i < size; i++) {
        arr[i] = arr[i + 1];  
    }
}


int main () {

    int arr[100] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7, element = 40, index = 5;
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;

}
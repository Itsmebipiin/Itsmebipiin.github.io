#include<stdio.h>
int main () {
    int size = 5;
    int arr[size];
    
    printf("\nEnter elements of Array : ");
    for(int i = 0; i <= size-1; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i <= size-1; i++) {
        printf("\n%d\n", arr[i]);
    } 

    return 0;   
}
#include<stdio.h>
int main () {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("\n%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);


    
    printf("\nArray Elements are : \n");
    for (int i=0; i<5; i++) {
        printf("\n%d", arr[i]);

    }
    //Its size of array in bytes
    printf("\n\nIt's size of array in Bytes : %lu\n", sizeof(arr)/sizeof(int));
    
    return 0;
}

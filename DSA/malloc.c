#include <stdio.h>
#include <stdlib.h> 

int main () {
    int *ptr;
    int n = 5;

    // Allocate memory for 5 integers 
    ptr = (int *) malloc (n * sizeof(int));


    if(ptr == NULL) {
        printf("\nMemory is not allocated ");
        return 1;
    }

    // Assigning value 
    for(int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
    }

    // Priint value 
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Free Memory
    free(ptr);

    return 0;
}
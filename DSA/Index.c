#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing index and element
    printf("\nIndex\tElement\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%d\n", i, arr[i]);
    }

    return 0;
}
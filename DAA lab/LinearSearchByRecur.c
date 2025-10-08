
#include<stdio.h>

int linearSearch(int arr[], int n, int index, int key) {
    if(index >= n) {
        return -1; 
    }
    if(arr[index] == key) {
        return index;
    }

    return linearSearch(arr, n, index+1, key);

}

int main () {
    int n, key;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter %d Elements : ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnetr Elements to search : ");
    scanf("%d", &key);

    int result = linearSearch( arr, n, 0, key);

    if(result == -1) {
        printf("\n%d is not found\n", key);
    }
    else {
        printf("\n%d is found at index %d\n", key, result);

    }
    return 0;
        
}

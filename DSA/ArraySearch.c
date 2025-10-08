#include <stdio.h>
int main () {

    int n, i, key, found = 0;

    printf("\nEnter the size of Array : ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnetr Elements : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the Elements to search : ");
    scanf("%d", &key);

    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            found ;
            break;
        }
    }

    if (found)
         printf("\nElement found at the index : and Position : %d", key, i, i+1);
    else 
         printf("Element is not found !!");
     
    return 0;
}
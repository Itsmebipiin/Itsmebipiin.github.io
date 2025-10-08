#include<stdio.h>
#include <limits.h> 
int main () {

    int n;
    printf("\nEnter the size of Array : ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]); 
    }

int biggest = INT_MIN;
for (int i =0; i<n; i++) {
    if(arr[i] > biggest) {
        biggest = arr[i];
    }
}
printf("\nBiggest is = %d", biggest);
    
    
    return 0;
} 
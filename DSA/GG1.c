#include<stdio.h>
int main () {
    
    int n;
    printf("\nEnter the size of array :");
    scanf("%d", &n);
    int ar[n];
    
    for(int i=0; i<n; i++) {
        scanf("%d", &ar[i]);
        
    }

    for(int i=0; i<n; i++) {
        for(int j=1; j<=n; j++) {
         if(ar[i] != j) {
            printf("%d ", j);
            break;

         } 

        }
    }
    
    
}
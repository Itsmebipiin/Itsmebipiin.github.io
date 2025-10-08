//  WAP to print sum of two matrices.

#include <stdio.h>
int main () {

    int n,m;
    printf("\nEnter a number of row N : ");
    scanf("%d", &n);

    printf("\nEnter a number of column M : ");
    scanf("%d", &m);

    int a[n][m], b[n][m];

    printf("\nEnter elements of matrix A : ");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of matrix B : ");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int sum;
    printf("\n\nMatrix C =  "); 
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", sum = a[i][j] + b[i][j]);
            
        }

        printf("\n            ");
    } printf("\n");


    return 0;
}
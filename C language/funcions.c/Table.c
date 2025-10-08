#include <stdio.h>

void Table(int n);

int main () {
    int n;

    printf("\nEnter a number to print the table : ");
    scanf("%d", &n);
    
    Table(n);

    return 0;
}

void Table(int n) {
    for(int i=1; i<=10; i++) {
        printf("\n%d x %d = %d\n",n,i, n*i);
    }

}

#include <stdio.h>
int sum(int a, int b);


int main (){

    int a,b;

    printf("Enter a numbe a : ");
    scanf("%d", &a);

    printf("Enter a numbe b : ");
    scanf("%d", &b);

    int A = sum (a, b);
    printf("\nSum is = %d\n", A);


    return 0;
}

int sum(int a, int b) {
return a + b;

}


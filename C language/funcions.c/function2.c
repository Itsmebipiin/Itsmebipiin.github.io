#include <stdio.h>

int sum (int a, int b);
void printtable (int n);



int main () {

    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    printtable (n);    //Argument / Actual Parameter


    return 0;
}


int sum ( int x, int y) {
    return x + y;
}


void printtable (int n) {   //Parameter /Actul Parameter
    for(int i=1; i<=10; i++) {

    printf("\n%d\n", n*i);

    }
}

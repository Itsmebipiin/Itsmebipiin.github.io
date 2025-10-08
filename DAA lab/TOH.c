#include<stdio.h>

void TOH(int n, char source, char dest, char temp) {
    if(n>0)
    TOH(n-1, source, temp, dest); {
        printf("Move disk from %c to %c\n", source, dest);
    }
    
}

int main () {
    int n=15;
    TOH(n, 's', 'd', 't');

    return 0;
}
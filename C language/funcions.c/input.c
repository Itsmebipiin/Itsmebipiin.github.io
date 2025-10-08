#include <stdio.h>

void male();
void female();
void others();
void notexist();

int main () {

    char ch;

    printf("\nEnter M for Male F for Femmale and X for Others : ");
    scanf("%c",&ch);

    if (ch == 'M') {
        male();
    } 
    else if (ch == 'F') {
        female();
    } 
    else if (ch == 'X') {
        others();
    }
    else {
        notexist();
    }

    return 0;
}


void male() {
    printf("\nYou are male\n\n");
}
void female() {
    printf("\nYou are Female \n\n");
}
void others() {
    printf("\nYou are others\n\n");
}
void notexist() {
    printf("\n Not Exist\nThank you !!\n\n" );
}
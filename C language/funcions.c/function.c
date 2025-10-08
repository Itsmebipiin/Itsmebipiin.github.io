#include <stdio.h>

void Namaste ();
void Gd_morning ();

int main () {
    char ch;

printf("\nEnter I for india and B for breten : ");
scanf("%c",&ch);

 if(ch == 'i'){
    Namaste ();
 } else {

    Gd_morning ();
 }


    return 0;
}

void Namaste () {

    printf("Namaste\n");

}

void Gd_morning () {

    printf("Good Morning\n");
}
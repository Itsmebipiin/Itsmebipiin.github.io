#include <stdio.h>

int main() {
    char ch;

    // Taking input from the user
    printf("\nEnter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z') {
        printf("\n'%c' is a lowercase letter.\n\n", ch);
    } else {
        printf("\n'%c' is a uppercase letters. \n\n",ch);
}

    return 0;
    }
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50];

    cout << "Enter string 1: ";
    cin.getline(str1, 50);

    cout << "Enter string 2: ";
    cin.getline(str2, 50);

    if (strcmp(str1, str2) == 0) {
        cout << "Strings are equal!";
    } else {
        cout << "Strings are not equal!";
    }

    return 0;
}
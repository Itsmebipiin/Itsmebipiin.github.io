#include <iostream>
using namespace std;

int main () {

char ch;
cout << "\nEnter characor : ";
cin >> ch;

if(ch >= 'a' && ch <= 'z') {
    cout << "Lowercase\n";
} else {
    cout << "Upercase\n";
}

    return 0;

}
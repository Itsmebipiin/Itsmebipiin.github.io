// WAP a program to check longest number among given three numbers by using if statements.


#include <iostream>
using namespace std;

int main () {

    int a,b,c;

    cout << "\nEnter a number : ";
    cin >> a >> b >> c;
    
    if(a > b && a > c) {
        cout << endl << a << " is biggest number. ";
    } else {
        if(b > c) {
            cout << endl << b << " is biggest number. ";
        }
        else {
            cout << endl << c << " is biggest number. ";
        }
    }


    return 0;
}
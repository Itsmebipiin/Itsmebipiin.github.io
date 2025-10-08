// WAP a program to check whether a number is even or odd.


#include <iostream>
using namespace std;
int main () {

    int n;

    cout << "\nEnter a number : ";
    cin >> n;

    if(n%2==0) {
        cout << endl << n << " is the even number. \n";
    } else {
        cout << endl << n << " is the odd number.\n";
    }

    return 0;
}
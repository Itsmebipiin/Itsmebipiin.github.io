// WAP a program to check whether a number is positive negative or zero by using if else statements .


#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "\nEnter a number : ";
    cin >> n;

     if(n > 0) {
        cout  << endl << n << " is positive number. ";
     } else {
        if(n < 0) {
            cout << endl << n << " is negative number. ";
        }  else {
            cout << endl << n << " is zero. ";
        }
     } 
     

    return 0;
}
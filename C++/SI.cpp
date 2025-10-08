#include <iostream>
using namespace std;

int main () {

int P,T,R;

cout << "\nEnter principle  :";
cin >> P;

cout << "Enter Time  :";
cin >> T;

cout << "Enter Rate  :";
cin >> R;

float SI = (P*T*R)/100;
cout << "\nSimple Intrest = " << SI << endl;

    return 0;
}
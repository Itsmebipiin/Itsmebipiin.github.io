#include <iostream>
using namespace std;

int main () {

int a,b;
cout << "Enter a number A :";
cin >> a;

cout << "Enter a number B :";
cin >> b;

if(a > b) {
    cout << "\nMaximum num A = " << a << endl;
} else if (a == b) {
    cout << "\nEqual to each other = " << endl;
} else {
    cout << "\nMaximum num B = " << b << endl;
}




    return 0;
}
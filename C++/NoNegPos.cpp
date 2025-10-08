#include<iostream>
using namespace std;

void number(int n) {
    if(n > 0) {
        cout << n << " is positive integer";
    }
    else if(n < 0) {
         cout << n << " is negative integer";
    }
    else {
        cout << n << " is zero" << endl;
    }

    cout <<"\n" <<endl;
}

int main () {

    int x;

    cout << "\nEnetr a number : ";
    cin >> x;
    
    cout << "\n";
    number(x);

    return 0;
}
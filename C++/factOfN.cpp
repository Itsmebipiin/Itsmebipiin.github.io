#include<iostream>
using namespace std;

int fact(int n) {
    if (n == 1) {
        cout << 1 << endl;
    }
    else if (n == 0) {
        cout << 1;
    }

    else {
        cout << n * fact(n - 1) << endl;
    }

}

int main () {
    int n;
    cout << "\nEnter the terms of factorial : ";
    cin >> n;

    cout << "\nFactorial of %d is %d " << n << fact(n-1) << endl;
}


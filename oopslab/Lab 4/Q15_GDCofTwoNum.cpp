// Find GCD of Two NUmbers.

#include <iostream>
using namespace std;

int main() {
    int a, b, gcd = 1;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD = " << gcd;
    return 0;
}
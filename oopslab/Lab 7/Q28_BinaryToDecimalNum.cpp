// convert binary to decimal number...

#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, rem;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    cout << "Decimal number: " << decimal << endl;

    return 0;
}
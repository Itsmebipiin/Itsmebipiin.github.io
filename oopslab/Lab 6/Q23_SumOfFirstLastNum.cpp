// sum of first and last digit...

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }

    cout << "Sum of first and last digit: " << num + lastDigit << endl;

    return 0;
}
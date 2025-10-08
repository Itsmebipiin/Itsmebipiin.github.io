//swap first and last digit of a number...

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, first, last, digits;

    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;
    digits = log10(num);
    first = num / pow(10, digits);

    int middle = num % (int)pow(10, digits) / 10;
    int swappedNum = last * pow(10, digits) + middle * 10 + first;

    cout << "Swapped number: " << swappedNum << endl;

    return 0;
}
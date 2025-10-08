// Add Two number using Function

#include <iostream>
using namespace std;

void addNumbers(int x, int y) {
    int sum = x + y;
    cout << "Sum = " << sum << endl;
}

int main() {
    int i, j;
    cout << "Enter first number: ";
    cin >> i;
    cout << "Enter second number: ";
    cin >> j;
    addNumbers(i, j);
    return 0;
}
// Print first and last digit of any bumber....

#include <iostream>
using namespace std;

int main() {
    int num, first, last;
    
    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;

    first = num;
    while (first >= 10) {  
        first /= 10;
    }

    cout << "First digit: " << first << endl;
    cout << "Last digit: " << last << endl;

    return 0;
}
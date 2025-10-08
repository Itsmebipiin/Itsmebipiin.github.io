// WAP to print reverse number.


#include <iostream>
using namespace std;

int main () {

    int n, reverse = 0, remainder;

    cout << "\nEnter a number : ";
    cin >> n;

    while (n != 0) {
        remainder = n % 10;

        reverse = reverse * 10 + remainder ;
        n /= 10;
    }

    cout << "\n" << "Reverse number is = "  << reverse << endl;


    return 0;
}
// Sum of Peime Number 

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int n = 50; n <= 200; n++) {
        int count = 0;

        for (int j = 1; j <= n; j++) {
            if (n % j == 0)
                count++;
        }

        if (count == 2) {
            cout << n << "+";
            sum +=n;
        }
    }

    cout << "\nSum of prime numbers = " << sum;
    return 0;
}
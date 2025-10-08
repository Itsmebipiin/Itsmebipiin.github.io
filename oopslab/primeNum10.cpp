//  WAP in c++ to print prime number from 0 to N


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    
    // Input the upper limit
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 0 to " << N << " are: ";

    // Loop through all numbers from 2 to N
    for (int num = 2; num <= N; num++) {
        bool isPrime = true; // Assume num is prime

        // Check divisibility up to sqrt(num)
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false; // If divisible, not prime
                break; // No need to check further
            }
        }

        // Print the number if it is prime
        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}

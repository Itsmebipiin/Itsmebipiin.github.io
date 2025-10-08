// WAP to print sum of all prime number for 0 to n. 


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, sum = 0;
    
    // Input the upper limit
    cout << "\n\nEnter the value of N: ";
    cin >> N;

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

        // If the number is prime, add it to sum
        if (isPrime) {
            sum += num;
        }
    }

    // Print the sum of prime numbers
    cout << "Sum of prime numbers from 0 to " << N << " is: " << sum << endl;

    return 0;
}

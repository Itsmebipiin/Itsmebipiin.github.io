#include <iostream>
using namespace std;

int main () {

int n;
int fact;

cout << "\nEnter a number : ";
cin >> n;

for (int i=1; i<=n; i++) {

    fact = fact*i;
}

cout << "\nThe factorial of first " << n << " natural number is = " << fact << endl;

    return 0;

}
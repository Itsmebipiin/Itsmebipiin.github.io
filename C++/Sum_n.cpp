#include <iostream>
using namespace std;

int main () {

int n;
int sum = 0;
cout << "Enter a number : ";
cin >> n;

for(int i=1; i<=n; i++) {
     sum += i;
}
 
 cout << "\nSum of first " << n << " natural numbers is = " << sum << endl;

 if(sum % 3 == 0) {
    cout <<"\nDivisible by 3 \n"; 
 } else {
    cout << "\nNot divisible by 3\n";
 }


    return 0;
}
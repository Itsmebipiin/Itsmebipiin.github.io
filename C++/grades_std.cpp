#include <iostream>
using namespace std;

int main () {

int n;
cout << "\nEnter marks (0-100) : ";
cin >> n;

if(n > 100) {
    cout << "Not Exits\nThank You\n";
} else if(n >= 90){
    cout << "The grade is A+\n";
} else if(n >= 80) {
    cout << "The grade is A\n";
} else if(n >= 70) {
    cout << "The grade is B\n";
} else if(n >= 60) {
    cout << "The grade is C\n";
} else if(n >= 50) {
    cout << "The grade is D\n";
} else if(n >= 40) {
    cout << "The grade is E\n";
} else {
    cout << "Fail\n";
}  
    return 0;

}
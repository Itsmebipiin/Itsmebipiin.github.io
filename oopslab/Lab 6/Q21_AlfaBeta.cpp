#include <iostream>
using namespace std;
int main() {
    cout << "Lowercase alphabet: ";
    for (char ch = 'a'; ch <= 'z'; ++ch) {
       cout << ch << " ";
    }

    cout << "\nUppercase alphabet: ";
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        cout << ch << " ";
    }

   cout << std::endl;
    return 0;
}
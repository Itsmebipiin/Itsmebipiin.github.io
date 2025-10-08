#include <iostream>
#include <string>
using namespace std;

int main() {
    int words = 1;
    string input;

    cout << "Enter the sentence: ";
    getline(cin, input);

    int charsum = input.length();

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            words++;
            charsum--;
        }
    }

    cout << "Words = " << words << endl;
    cout << "Charsum = " << charsum;

    return 0;
}
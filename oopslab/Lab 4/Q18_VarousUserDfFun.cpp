#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. No argument and no return value\n";
    cout << "2. No argument and return value\n";
    cout << "3. Argument and no return value\n";
    cout << "4. Argument and return value\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Hello!";
            break;

        case 2: {
            string name;
            cout << "Enter your username: ";
            cin >> name;
            cout << "Hello, " << name;
            break;
        }

        case 3: {
            string name;
            cout << "Enter your name: ";
            cin >> name;
            cout << "Hello, " << name;
            break;
        }

        case 4: {
            string name;
            cout << "Enter your name: ";
            cin >> name;
            string greeting = "Hello, " + name;
            cout << greeting;
            break;
        }

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
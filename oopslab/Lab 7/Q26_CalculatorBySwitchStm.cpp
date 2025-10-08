//Calculator using switch statement...

#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Select operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
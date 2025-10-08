// Quadratic Equation.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

    cout << "Enter values of a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
            break;

        case 0:
            switch (discriminant == 0) {
                case 1:
                    x1 = -b / (2 * a);
                    cout << "Roots are real and same." << endl;
                    cout << "x1 = x2 = " << x1 << endl;
                    break;

                case 0:
                    realPart = -b / (2 * a);
                    imaginaryPart = sqrt(-discriminant) / (2 * a);
                    cout << "Roots are complex and different." << endl;
                    cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
                    cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
                    break;
            }
    }

    return 0;
}
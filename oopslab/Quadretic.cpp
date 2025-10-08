// WAP to compute the roots of quadretic equation by using switch statements.



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    // Taking input from user
    cout << "\n\nEnter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Determine root type using switch-case
    switch ((discriminant > 0) ? 1 : (discriminant == 0) ? 0 : -1) {
        case 1: // Two real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and distinct:\n";
            cout << "Root 1 = " << root1 << "\nRoot 2 = " << root2 << endl;
            break;

        case 0: // Two real and equal roots
            root1 = -b / (2 * a);
            cout << "Roots are real and equal:\n";
            cout << "Root 1 = Root 2 = " << root1 << endl;
            break;

        case -1: // Complex roots
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are complex:\n";
            cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
            cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
            break;

        default:
            cout << "Invalid input!";
    }

    return 0;
}
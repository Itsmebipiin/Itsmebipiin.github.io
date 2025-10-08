// Add of two numbers using class

#include <iostream>

using namespace std;

class Numbers {
    private:
        int a, b;

    public:
        void readnumbers();
        int addition();
};

void Numbers::readnumbers() {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

int Numbers::addition() {
    return a + b;
}

int main() {
    Numbers num;
    int add;
    num.readnumbers();
    add = num.addition();
    cout << "Addition = " << add << endl;

    return 0;
}
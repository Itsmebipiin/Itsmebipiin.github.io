// Define a class method outside of the Class.
 

#include <iostream>
using namespace std;

class Sample {
public:
    void printText1();
    void printText2();
    void printPercentage(int percentage);
};

void Sample::printText1() {
    cout << "Name: Sachin Yadavanshi" << endl;
}

void Sample::printText2() {
    cout << "Clz: BCE, Patna" << endl;
}

void Sample::printPercentage(int percentage) {
    cout << "Percentage marks is: " << percentage << endl;
}

int main() {
    Sample s;
    s.printText1();
    s.printText2();
    s.printPercentage(92);
    return 0;
}
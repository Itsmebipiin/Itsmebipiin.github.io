// 2. WAP to C++ demostrate single inheritance


#include <iostream>
using namespace std;

class Person {
public:
    void showName() {
        cout << "Name: Bipin\n";
    }
};

class Student : public Person {
public:
    void showRoll() {
        cout << "Roll No: 101\n";
    }
};

int main() {
    Student s;
    s.showName();   
    s.showRoll();  
    return 0;
}
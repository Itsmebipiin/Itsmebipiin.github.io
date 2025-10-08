// Accept and display students details.

#include <iostream>
#include <cstring>
using namespace std;

class student {
private:
    char name[50];
    char Rollno[10];
    char Sem[10];

public:
    void input();
    void display();
};

void student::input() {
    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(name, 50);

    cout << "Enter Roll No.: ";
    cin >> Rollno;

    cout << "Enter Semester: ";
    cin >> Sem;
}

void student::display() {
    cout << "\nName: " << name;
    cout << "\nRoll No.: " << Rollno;
    cout << "\nSemester: " << Sem;
}

int main() {
    student s;
    s.input();
    s.display();
    return 0;
}
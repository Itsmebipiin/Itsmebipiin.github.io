// Create a Object of a class and access class attributes

#include <iostream>
using namespace std;

class student {
public:
    string name = "Sachin Yaduvanshi";
    int roll = 72;
    int marks = 650;
};

int main() {
    student a;

    cout << "Name: " << a.name << endl;
    cout << "Roll No.: " << a.roll << endl;
    cout << "Marks: " << a.marks << endl;

    return 0;
}
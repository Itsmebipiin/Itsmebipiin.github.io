// Multiple object of Class.


#include <iostream>
#include <string>
using namespace std;

class student {
public:
    int rollno;
    string name;
    float perc;
};

int main() {
    student std1, std2;

    std1.rollno = 71;
    std1.name = "Shivangi Yadav";
    std1.perc = 92.3;

    std2.rollno = 72;
    std2.name = "Sachin Yadav";
    std2.perc = 98.4;

    cout << "Student 1's Details:\n";
    cout << "Name: " << std1.name << "\n";
    cout << "Roll Number: " << std1.rollno << "\n";
    cout << "Percentage: " << std1.perc << "\n\n";

    cout << "Student 2's Details:\n";
    cout << "Name: " << std2.name << "\n";
    cout << "Roll Number: " << std2.rollno << "\n";
    cout << "Percentage: " << std2.perc << "\n";

    return 0;
}
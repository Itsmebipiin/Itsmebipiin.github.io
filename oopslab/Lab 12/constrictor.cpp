#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int roll;

        // Default Constructor
        Student() {
            name = "Bipin MAllik";
            roll = 50;
        }

        void display() {
            cout << "\nName: " << name << endl;
            cout << "Roll: " << roll << endl;
        }
};

int main() {
    Student s1;    // Constructor automatically called
    s1.display();
    return 0;
}
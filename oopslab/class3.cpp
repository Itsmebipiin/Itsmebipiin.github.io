//  Creating an object of class and access attribute


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string branch;

public:

    void setDetails(string n, int r, string b) {
        name = n;
        rollNumber = r;
        branch = b;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    
    Student s1;

    s1.setDetails("Bipin Mallik", 2350, "Computer Science and Engineering");

    s1.displayDetails();

    return 0;
}
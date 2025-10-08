#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string branch;

public:
    
    void acceptDetails() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); 
        cout << "Enter Branch: ";
        getline(cin, branch);
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    int n;

    cout << "\n\nEnter number of students: ";
    cin >> n;
    cin.ignore(); 

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].acceptDetails();
    }

    cout << "\nDisplaying Student Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayDetails();
    }

    return 0;
}
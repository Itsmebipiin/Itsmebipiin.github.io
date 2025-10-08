//  Write a program in c++ to accept and display details using class.


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string collegeName;
    string session;
    int rollNumber;
    string branch;
    float marks10th;
    float marks12th;

public:
    
    void acceptDetails() {
        cout << "\n\nEnter Name: ";
        getline(cin, name);
        
        cout << "Enter College Name: ";
        getline(cin, collegeName);
        
        cout << "Enter Session (e.g., 2022-2026): ";
        getline(cin, session);
        
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); 
        
        cout << "Enter Branch: ";
        getline(cin, branch);
        
        cout << "Enter 10th Board Marks (in %): ";
        cin >> marks10th;
        
        cout << "Enter 12th Board Marks (in %): ";
        cin >> marks12th;
    }

    void displayDetails() {
        cout << "\n------ Student Details ------\n";
        cout << "Name: " << name << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "Session: " << session << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Branch: " << branch << endl;
        cout << "10th Board Marks: " << marks10th << "%" << endl;
        cout << "12th Board Marks: " << marks12th << "%" << endl;
    }
};

int main() {
    Student s; 
    s.acceptDetails(); 
    s.displayDetails(); 
    return 0;
}
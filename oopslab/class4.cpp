//  Write a program in c++ to accept and display details using class.


#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    
    void acceptDetails() {
        cout << "\n\nEnter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Enter Address: ";
        getline(cin, address);
    }

    void displayDetails() {
        cout << "\n--- Person Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Person p; 
    p.acceptDetails(); 
    p.displayDetails(); 

    return 0;
}
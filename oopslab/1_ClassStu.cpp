#include<iostream>
using namespace std;

class student {
public :
    string name ;
    int roll;
    float marks1, marks2, marks3;

    void acceptDetails () {
        cout << "\nEnter name : ";
        getline (cin, name);
        cout <<"Enter Roll No : ";
        cin >> roll;
        cout << "Enter marks of 3 Subjects : ";
        cin >> marks1 >> marks2 >> marks3 ; 
    }

    void displayStuDetails() {
        float total = marks1 + marks2 + marks3;
        float percentage = total/3;
        
        cout << "\n\n_____Students 1 Details_____\n";
        cout << "\nName : " << name << endl;
        cout << "Roll No : " << roll << endl;
        cout << "Marrks in Percentage : " << percentage << "%"<< endl;

    }
};

int main () {
    student s1;
    s1.acceptDetails ();
    s1.displayStuDetails ();

    return 0;
}      
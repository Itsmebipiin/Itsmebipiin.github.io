#include <iostream>
using namespace std;

class student 
{
    public :
       string name;
       int age, roll;
       string grade;


    void display () {

        cout << endl << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll Number : " << roll << endl;
        cout << "Grade : " << grade << endl;

    }

};

int main () {
    student s1, s2;

    s1. name = "Bipin Mallik" ;
    s1. age = 19;
    s1.roll = 2350;
    s1.grade = "A+";

    s2. name = "Abhinav Alina" ;
    s2. age = 18;
    s2.roll = 02;
    s2.grade = "B+";

    s1.display ();
    s2.display ();

    return 0;
}

#include<iostream>
using namespace std;

class student {
   public :

   string name;
   int roll_no;

   void display () {

    cout << "Name : " << name << endl;
    cout << "Roll No : " << roll_no << endl;

   }

};

int main () {

    student s1, s2;

    s1.name = "Bipin Mallik ";
    s1.roll_no = 2350;

    s2.name = "Amod Mallik ";
    s2.roll_no = 1082;


    s1.display ();
    s2.display ();

    return 0;
}
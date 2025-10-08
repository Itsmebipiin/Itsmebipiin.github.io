#include <iostream>
using namespace std;

class person {
    public :
       string name ;
       int age ;

         void setPerson(string n, int a) {
            name = n;
            age = a;

        }

        void showPerson () {
            cout << "Name : " << name << "\nAge : " << age << endl;
        }
    
};

class student : public person {
    public :
     int rollNo;

     void setStudent (int r){
        rollNo = r;
     }

     void showStudent () {
        showPerson();
        cout << "Roll No : " << rollNo << endl; 
     }
};

class Teacher : public person {
    public :
    string subject;

    void setTeacher(string s) {
        subject  = s;
    }

    void showTeacher () {
        showPerson ();
        cout << "Subjject : " << subject << endl;
    }
};

int main () {

    student s1;
    s1.setPerson("Bipin Mallik ", 19);
    s1.setStudent(101);
    cout << "\n---Student Details---" << endl;
    s1.showStudent();

    Teacher t1;
    t1.setPerson("Dr. Rohit Mehra ", 49);
    t1.setTeacher("Mathematics\n");
    cout << "\n---Teacher Details---" << endl;
    t1.showTeacher();
    
    return 0;
}
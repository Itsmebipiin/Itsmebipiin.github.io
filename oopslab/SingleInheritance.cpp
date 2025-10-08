#include <iostream>
using namespace std;

class Person {
    public :
    string name;

    void setName(string n){
        name = n;

    }
};

class Student : public Person {
    public :
    int roll;

    void setRoll(int r){
        roll = r;

    }

    void Display() {
        cout << "\nName : " << name << endl;
        cout << "Roll : " << roll << endl;
    }

};

int main () {

    Student s;

    s.setName("Bipin MAllik");
    s.setRoll(101);
    s.Display();
      return 0;
}

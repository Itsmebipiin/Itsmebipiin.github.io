#include <iostream>
using namespace std;

class creature {
    public :
    void breathe() {
        cout << "\nBreathing ..... " << endl; 
    }
};

class person : public creature {
    public :
    string name;
    string gender;

    void personName(){
        cout << "\nName : " << name << endl;
        cout << "Gender : " << gender << endl;
    }
};

class student : public person {
    public :
    string collge;
    string course;
    string roll;

    void AboutStu() {
        cout << "College Name : " << collge << endl;
        cout << "Course : " << course << endl;
        cout << "Roll No : " << roll << endl;
    }
};

int main () {
    student S1;

    S1.name = "Bipin Mallik";
    S1.gender = "Male";
    S1.collge = "B.C.E Patna ";
    S1.course = "BTech (CSE)";
    S1.roll = "IOT50";

    S1.breathe();
    S1.personName();
    S1.AboutStu();

    cout<<"\n----*---------*----" << "\n";

    return 0;
}
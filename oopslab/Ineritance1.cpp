#include <iostream>
using namespace std;

class Employee {
    public :
    string name;
    string post;

    void EmployeeDet() {
        cout << "\nName : " << name << endl;
        cout << "Post : " << post << endl;
    }

};

class Manager : public Employee {
    public :
    int Salary;
    int id;

    void DisplayDet() {
        cout << "Salary : " << Salary << endl;
        cout << "ID No : " << id << endl;
    }
};

int main () {

    Manager m;

    m.name = "Bipin Mallik";
    m.post = "Manager";
    m.Salary = 120000;
    m.id = 1001;

    cout << "---*--------*---";

    m.EmployeeDet();
    m.DisplayDet();

    return 0;
}
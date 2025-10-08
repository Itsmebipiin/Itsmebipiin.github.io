#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;
    string address;

public:
    void input()
    {
        cout << "\nEnter name : ";
        cin >> name;

        cout << "Enter age : ";
        cin >> age;

        cout << "Enter Address : ";
        cin >> address;
    }

    void show()
    {

        cout << "\n---Person Details----" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address : " << address << endl;
    }
};

int main()
{
    Person M1, M2, M3;

    M1.input();
    M2.input();
    M3.input();
    M1.show();
    M2.show();
    M3.show();
}
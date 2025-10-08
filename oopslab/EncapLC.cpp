#include <iostream>
using namespace std;

class person {
    int age;
    void show() {
        cout << "Name : Sita\n";
        cout << "Age : 16 \n";
    }

    public :
    string name;
    void setage(int a) {
        age = a;
        cout<<"Age : " <<age <<endl;
        show();
    }
};

int main () {

    person A;

    A.name = "Ram";
    cout<<"\nName : " << A.name<<endl;
    A.setage(18);

}

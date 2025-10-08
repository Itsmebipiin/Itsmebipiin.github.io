#include <iostream> 
using namespace std;

class Animal {
    protected :
    string sound;

    public :
    void setSound(string s) {
        sound = s;
    }
};

class Dog : public Animal {
    public :
    void bark() {
        cout << "\nDog Says : " << sound <<endl;
    }
};

int main () {
   Dog Dog1;

   Dog1.setSound("Woof !");
   Dog1.bark();

    return 0;
}
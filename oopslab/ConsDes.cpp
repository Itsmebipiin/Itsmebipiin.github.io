#include <iostream>
using namespace std;

class Myclass {
    public:
      Myclass () {
        cout << "\nConstructor Called " << endl ;
      }

      ~Myclass () {
        cout << "\nDestructor Called " << endl;
      }
};

int main () {
    Myclass obj;

    return 0;
}
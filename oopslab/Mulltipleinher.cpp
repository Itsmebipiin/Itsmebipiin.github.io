#include <iostream>
using namespace std;

class Artist {
    public : 
    void drow() {
        cout << "\nDrower.... " << endl; 
    }
};

class Engineer {
    public :
    void build() {
        cout << "I am the builder " << endl;

    }

};

class person : public Artist , public Engineer {
    public :
    void Introduce () {
        cout << "I am an Artist and an Engineer " << endl;
    }
};

int main () {
    person p;

    p.drow();
    p.build();
    p.Introduce();

    return 0;
}


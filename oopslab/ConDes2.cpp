#include <iostream>
using namespace std;

class Laptop {
    public :
    string brand;
    int price;

    Laptop () {
        brand = "Asus Vivobook";
        price = 65000;
        cout << "\n[Default Constructor Called]";
    }

    Laptop (string b, int p) {
        brand = b;
        price = p;
        cout << "\n[Parameterized Constructor is Called]";

    }

    void Display() {
        cout << "\nBrand : " << brand << endl; 
        cout << "Price Rs : " << price << endl; 
    }

    ~Laptop () {
        cout << "\n[Destructor os called for Brand :" << brand << "]" <<endl;
    }
};

int main () {
    Laptop l1;
    l1.Display();

    Laptop l2("HP Pavillion", 65000);
    l2.Display();

    Laptop l3("Macbook Air M2", 1200000);
    l3.Display();

    return 0;
}
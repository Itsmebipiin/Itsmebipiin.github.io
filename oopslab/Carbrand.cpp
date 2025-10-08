#include <iostream>
using namespace std;

class Car {
    public :
        
        string brand;
        string model;
        string colour;
        int price ;

        void aboutCar () {
            cout << endl << "Brand : " << brand << endl;
            cout << "Model : " << model << endl;
            cout << "Colour : " << colour << endl;
            cout << "Price Rs : " << price << endl << endl;

        }

};

int main () {

    Car d1;

    d1.brand = "TATA";
    d1.model = "NEXON";
    d1.price = 890000;
    d1.colour = "WHITE";

    Car d2;

    d2.brand = "HYUNDAI";
    d2.model = "i20";
    d2.colour = "BLACK";
    d2.price = 850000;

    cout << "\n\n ----* Car 1 Details *---- \n";
    d1.aboutCar();

    cout << "\n ----* Car 2 Details *---- \n";
    d2.aboutCar();
};

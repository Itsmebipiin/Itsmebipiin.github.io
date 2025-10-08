#include <iostream>
using namespace std;

class Appliance {
    public :
    string brand;
    int warranty;

    void setAppliance(string b, int w){
        brand = b;
        warranty = w;

    }
    void showAppliance() {
        cout << "Brand : " << brand << endl;
        cout << "Warranty : " << warranty << endl;

    }
};

class WashingMachine : public Appliance {
    public :
    float loadcapacity;

    void setWashingMachine(float capacity) {
        loadcapacity = capacity;
    }

    void showWashingMachine () {
        showAppliance();
        cout << "Load Capacity : " << loadcapacity << "Kg" << endl;

    }

};

class Refrigerator : public Appliance {
    public :
    float volume;

    void setRefrigerator(float v) {
        volume = v;

    }

    void showRefrigerator() {
         showAppliance();
         cout << "Volume : " << volume << " litres \n" << endl;

    } 
};

int main () {

    WashingMachine WM;
    WM.setAppliance ("LG", 3);
    WM.setWashingMachine(6.5);
    cout << "\n---Washing Maching Details---" << endl;
    WM.showWashingMachine();

    Refrigerator RF;
    RF.setAppliance("Samsung", 5);
    RF.setRefrigerator(440);
    cout << "\n---Rafrigerator Details---" << endl;
    RF.showRefrigerator();
    
    return 0;
}
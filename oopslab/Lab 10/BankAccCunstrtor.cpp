// 1. WAP to C++ for maintaing Bank account using constructor overloading 


#include <iostream>
using namespace std;

class Bank {
    string name;
    int accNo;
    double balance;

public:
    Bank() {
        name = "Vikas sir";
        accNo = 10001089;
        balance = 500;
    }

    Bank(string n, int a) {
        name = n;
        accNo = a;
        balance = 0;
    }

    Bank(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void show() {
        cout << "\nName: " << name;
        cout << "\nAcc No: " << accNo;
        cout << "\nBalance: " << balance << "\n";
    }
};

int main() {
    Bank b1, b2("Vikash sir", 101), b3("Bipin", 102, 5000);
    b2.show();
    b3.show();
    return 0;
}
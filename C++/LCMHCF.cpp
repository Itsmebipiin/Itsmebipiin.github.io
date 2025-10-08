#include<iostream>
using namespace std;

int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;

}


int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);

}

int main () {
    int num1, num2;

    cout <<"\nEnter two number : \n";
    cin >> num1 >> num2;

    int hcf = findHCF(num1, num2);
    int lcm = findHCF(num1, num2);

    cout <<"\nHCF = " << hcf << endl;
    cout <<"LCM = " << lcm << endl;

    return 0;
}


#include<iostream>
using namespace std;

void sum(int a, int b) {
        cout << "\nSum of " << a << " + " << b << " = " << a + b << endl;
}

void product(int a, int b) {
    cout<<"Product of " << a << " * " << b << " = " << a * b <<endl;
}


int main () {

    int x , y;

    cout<<"\n\nEnter a num1 : ";
    cin>>x;

    cout<<"Enter a num2 : ";
    cin>>y;

    sum(x, y);
    product(x, y);


}
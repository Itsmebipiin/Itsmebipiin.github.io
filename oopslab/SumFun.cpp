#include <iostream>
using namespace std;

int sumWithReturn(int x, int y){
    return x+y;
}

void sumWithoutReturn(int x, int y){
   cout << "\nSum = " << x + y << endl;
}

int main () {
    int a, b;
    
    cout << "\nEnter a : " ;
    cin >> a;
    cout << "Enter b : " ;
    cin >> b;

    int result = sumWithReturn(a,b);
    cout << "\nSum ( WithReturn ) : " << result << endl;

    sumWithoutReturn(a,b);

    return 0;
}
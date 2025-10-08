//armstrong number...

//#include<bits/stdc+.h>

#include <iostream>
using namespace std;

int order(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int order_n = order(num), sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, order_n);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    cout << "Armstrong numbers between 1 to 1000: ";
    for (int num = 1; num <= 1000; ++num) {
        if (isArmstrong(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
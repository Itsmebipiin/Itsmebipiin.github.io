//Wap to print perfect number in a given range using function..

#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void printPerfectNumbers(int start, int end) {
    cout << "Perfect numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    printPerfectNumbers(start, end);

    return 0;
}
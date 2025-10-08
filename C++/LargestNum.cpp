#include<iostream>
using namespace std;

int main () {

    int nums [] = {12, 36, -23, 73, 24, -2,-13, 29};
    int size = 8;

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i = 0; i < size; i++ ) {
        //largest = max(nums[i], largest);
        //smallest = min(nums[i], smallest);
    }

    cout << "Largest Value : " << largest << endl;
    cout << "Smallest Value : " << smallest << endl;



    return 0;
}
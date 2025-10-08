#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int binary,i,n;
    cout<<"Enter the nunber:";
    cin>>n;
    i=0;
    binary=0;
    while(n>0){
        binary=binary+((n%2)*(int)pow(10,i));
        n=n/2;
        i++;
    }
    cout<<"Binary="<<binary<<"  ";
}

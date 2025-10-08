// WAP to print even or odd numbers in a given range using recursion...

#include<iostream>
using namespace std;
void evennumbers(int a, int b)
{
	if(a>b) return;
	if(a%2==0) cout<<a<<" ";
	evennumbers(a+1, b); 
}
void oddnumbers(int a, int b)
{
	if(a>b) return;
	if(a%2!=0) cout<<a<<" ";
	oddnumbers(a+1, b);
}
int main()
{
	int a,b;
	cout<<"Enter the range= ";
	cin>>a>>b;
	cout<<"Even numbers= ";
	evennumbers(a,b);
	cout<<endl;
	cout<<"Odd numbers= ";
	oddnumbers(a,b);
	cout<<endl;
return 0;
}
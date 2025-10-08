// WAP to find lcm of two numbers using recursion...

#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int lcm(int a,int b){
	return (a*b)/gcd(a, b);
}
int main()
{
	int a,b;
	cout<<"Enter the first number= ";
	cin>>a;
	cout<<"Enter the second number= ";
	cin>>b;
	cout<<"LCM of "<<a<<" and "<<b<<" are= "<<lcm(a,b);
return 0;
}
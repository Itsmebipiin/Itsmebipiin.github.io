// WAP to find sum of natural numbers in a given range using function...

#include<iostream>
using namespace std;
int sumofnatural(int a,int b)
{
	int sum=0;
	for(int i=a; i<=b; i++)
	{
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int a,b;
	cout<<"Enter the range= ";
	cin>>a>>b;
	cout<<"Sum= "<<sumofnatural(a,b);
return 0;
}
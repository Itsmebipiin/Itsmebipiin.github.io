// WAP to print all strong number between two numbers...

#include<iostream>
using namespace std;
int fact(int n)
{                       
	int f=1;
	for(int i=1; i<=n; i++)
	f=f*i;
	return f;
}
void strongnumbers(int a,int b)
{
	for (int i=a;i<=b;i++)
	{
		int sum=0,num=i;
		while(num>0)
		{
			sum+=fact(num%10);  
			num/=10;
		}
		if(sum==i)
		cout<<i<<" ";
	}
}
int main()
{
	int a,b;
	cout<<"Check here strong numbers b/w two numbers:-> \n";
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
    
    cout<<"\nStrong numbers between "<<a<<" and "<<b<<" are: ";
    strongnumbers(a,b);
return 0;
}
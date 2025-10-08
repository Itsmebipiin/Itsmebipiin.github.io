// wap to find prime numbers in a given range...

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Check here prime numbers b/w two numbers:-> \n";
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	for(int i=a; i<=b; i++)
	{
	   bool isprime=true;
	   if(i<=1)
	   continue;
	   
	   for(int j=2; j<i; j++)
	  {
	    if(i%j==0){
	    isprime=false; 
		break;
	   }
      }
     if(isprime)
    cout<<i<<" ";
     }
return 0;
}
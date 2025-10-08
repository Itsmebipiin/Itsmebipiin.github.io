// WAP to find Diameter, Circumference and Area of a circle using function...

#include <iostream>
using namespace std;
#define pi 3.14159


double diameter(double r){
     return 2*r;}
double circumference(double r){
	 return 2*pi*r;}
double area(double r){
	 return pi*r*r;}
int main()
{
	double r;
	cout <<"Enter the radious of a circle: ";
	cin>>r;
	cout<<"Diameter: "<<diameter(r)<<endl;
	cout<<"Circumference"<<circumference(r)<<endl;
	cout<<"Area"<<area(r)<<endl;
return 0;
}
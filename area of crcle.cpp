// calculate area.cpp
#include<iostream>
using namespace std;
// declration of function with parameter
double cal_area(double radius)
{
	const double pi=3.1417;      //in all code the value of pi remains constant
	return pi*radius*radius; 
}
int main()    // main function
{
	double radius;
	cout<<"Enter Radius:";
	cin>>radius;
	double area=cal_area(radius);
	cout<<"Area OF Circle :"<<area;
	
}

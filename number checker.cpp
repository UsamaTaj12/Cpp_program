//find the number.cpp
//[Usama Taj]
#include<iostream>
using namespace std;
int main()    //main function
{
int num;
cout<<"Enter Your Number:";
cin>>num;
// using of nested if else 
if(num>0)
{
	cout<<"Number Is Positive";
}
else if(num<0)
{
	cout<<"Number Is Negative";
}
else if(num=0)
{
	cout<<("Number Is Zero");
}
else
{
	cout<<"ERROR";
}
return 0;
}

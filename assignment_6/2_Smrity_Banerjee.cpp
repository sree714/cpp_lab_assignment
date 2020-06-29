/*
Write a program to compute area of triangle. Sides are input by user.
Area = sqrt(s*(s-a)*(s-b)*(s-c))
where s=(a+b+c)/2.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,s,area;
	cout<<"enter the three sides of the triangle:";
	cin>>a>>b>>c;
	cout<<endl;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of the triangle is ="<<area<<endl;
	return 0;
}

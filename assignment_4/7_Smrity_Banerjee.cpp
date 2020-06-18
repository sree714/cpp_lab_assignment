/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are
entered by the user. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/


#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3;
	cout<<"enter the 3 angles of a triangle:";
	cin>>a1;
	cout<<endl;
	cin>>a2;
	cout<<endl;
	cin>>a3;
	if(a1+a2+a3==180)
	cout<<"The triangle is valid "<<endl;
	else
	cout<<"The triangle is not valid"<<endl;
	return 0;
}

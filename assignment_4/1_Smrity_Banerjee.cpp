/*
Write a program which accepts days as integer and display total number of years, months and days in it.
For example: If user input as 856 days the output should be 2 years 4 months 6 days.
*/


#include<iostream>
using namespace std;
int main()
{
	int days,y,m,d;
	cout<<"enter the number of days:";
	cin>>days;
	cout<<endl;
	y=days/365;
	days=days%365;
	m=days/30;
	d=days%30;
	cout<<"years:"<<y<<endl;
	cout<<"months:"<<m<<endl;
	cout<<"days:"<<d<<endl;
	return 0;
}

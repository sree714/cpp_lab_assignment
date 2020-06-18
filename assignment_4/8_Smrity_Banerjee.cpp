/*
Any year is input by the user. Write a program to determine whether the year is a leap year or not.
*/


#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year:";
	cin>>year;
	cout<<endl;
	if((year%400==0||year%100!=0)&&(year%4==0))
	cout<<year<<"is a leap year"<<endl;
	else
	cout<<year<<"is not a leap year"<<endl;
	return 0;
}

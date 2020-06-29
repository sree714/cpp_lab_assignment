/*
Write a program using function which accept two integers as an argument and return its sum. Call this
function from main( ) and print the results in main( ).
*/

#include<iostream>
using namespace std;
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return(sum);
}
int main()
{
	int a,b,s;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<endl;
	s=add(a,b);
	cout<<"sum ="<<s;
	return 0;
}

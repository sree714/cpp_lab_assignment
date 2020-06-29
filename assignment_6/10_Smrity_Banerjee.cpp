/*
Raising a number to a power p is the same as multiplying n by itself p times. Write a function called
power that takes two arguments, a double value for n and an int value for p, and return the result as
double value. Use default argument of 2 for p, so that if this argument is omitted the number will be
squared. Write the main function that gets value from the user to test power function.
*/

#include<iostream>
using namespace std;
double power(double n, int p=2);
int main()
{
	int p;
	double n,r;
	cout<<"enter any number:";
	cin>>n; cout<<endl;
	cout<<"enter the exponent:";
	cin>>p; cout<<endl;
	if(p>2)
	{
		r=power(n,p);
		cout<<"Result ="<<r<<endl;
	}
	else
	{
		r=power(n);
		cout<<"squared result of the given number ="<<r<<endl;
	}
	return 0;
}
double power( double n, int p)
{
	double a=1;
	for(int i=1;i<=p;i++)
	a=a*n;
	return(a);
}

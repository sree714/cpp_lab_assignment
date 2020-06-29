/*
Write a program which input principal, rate and time from user and calculate compound interest. You
can use library function.
CI = P(1+R/100)T – P
*/

include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float p,r,t,i;
	cout<<"enter the principal amount:";
	cin>>p; cout<<endl;
	cout<<"enter the rate of interest:";
	cin>>r; cout<<endl;
	cout<<"enter the time:";
	cin>>t; cout<<endl;
	i=p * pow((1+r/100),t)-p;
	cout<<"Compound Interest is = "<<i<<endl;
	return 0;
}

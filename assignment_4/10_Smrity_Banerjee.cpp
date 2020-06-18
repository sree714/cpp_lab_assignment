/*
Write a program to calculate the monthly telephone bills as per the following rule:
Minimum Rs. 200 for up to 100 calls.
Plus Rs. 0.60 per call for next 50 calls.
Plus Rs. 0.50 per call for next 50 calls.
Plus Rs. 0.40 per call for any call beyond 200 calls.
*/

#include<iostream>
using namespace std;
int main()
{
	int call;
	float bill;
	cout<<"Enter the number of calls:";
	cin>>call;
	cout<<endl;
	if(call<=100)
	bill=200;
	else if(call>100 && call<=150)
	{
		call=call-100;
		bill=200+(0.60*call);
	}
	else if(call>150 && call<=200)
	{
		call=call-150;
		bill=200+(0.60*50)+(0.50*call);
	}
	else
	{
		call=call-200;
		bill=200+(0.60*50)+(0.50*50)+(0.40*call);
	}
	cout<<"Telephone Bill ="<<bill<<endl;

	return 0;
}

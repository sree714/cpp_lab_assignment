/*
Write a program to print Fibonacci series of n terms where n is input by user : 0 1 1 2 3 5 8 13 24 .....
*/

#include<iostream>
using namespace std;
int main()
{
	int f=0, s=1, t,n;
	cout<<"enter number of terms of the series:";
	cin>>n;
	cout<<endl;
	cout<<"fibonacci series is :"<<endl;
	cout<<f<<" "<<s<<" ";
	for(int i=3;i<n;i++)
	{
		t=f+s;
		cout<<t<<" ";
		f=s;
		s=t;
	}
	return 0;
}

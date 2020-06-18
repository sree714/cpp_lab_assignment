/*
Any integer is input by the user. Write a program to find out whether it is an odd number or even
number.
*/



#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number:";
	cin>>n;
	cout<<endl;
	if(n%2==0)
	cout<<n<<"is a even number"<<endl;
	else
	cout<<n<<"is a odd number"<<endl;
	return 0;
}

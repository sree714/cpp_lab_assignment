/*
Write a program to calculate HCF of Two given number
*/

#include<iostream>
using namespace std;
int main()
{
	int x,y,i,gcd;
	cout<<"enter the value of x and y:";
	cin>>x>>y;
	cout<<endl;
	for(i=1;i<=x && i<=y;i++)
	{
		if(x%i==0 && y%i==0)
		gcd=i;
	}
	cout<<"gcd is ="<<gcd<<endl;
	return 0;
}

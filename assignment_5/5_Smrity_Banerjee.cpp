/*
Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of
the number is equal to the number itself, then the number is called an Armstrong number.
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/


#include<iostream>
using namespace std;
int main()
{
	int n,d1,d2,d3;
	cout<<"armstrong numbers between 1 to 500 are:"<<endl;
	for(int i=1;i<=500;i++)
	{
		d1=i/100;
		d2=i/10-d1*10;
		d3=i%10;
		if((d1*d1*d1+d2*d2*d2+d3*d3*d3)==i)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}

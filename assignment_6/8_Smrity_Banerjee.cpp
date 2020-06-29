/*
Write a function to calculate the factorial value of any integer as an argument. Call this function from
main( ) and print the results in main( ).
*/


#include<iostream>
using namespace std;
int factorial(int a)
{
	int fact=1;
	while(a>=1)
	{
	fact=fact*a;
	a--;
    }
    return(fact);
}
int main()
{
	int a,f;
	cout<<"enter a number:";
	cin>>a;
	cout<<endl;
	f=factorial(a);
	cout<<"factorial of"<<a<<"is ="<<f<<endl;
	return 0;
}

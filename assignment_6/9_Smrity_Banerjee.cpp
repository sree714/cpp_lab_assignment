/*
Write a function that receives two numbers as an argument and display all prime numbers between these
two numbers. Call this function from main( ).
*/

#include<iostream>
using namespace std;
void prime(int a,int b)
{
	bool f;
	for(int i=a+1;i<=b;i++)
	{
		f=false;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=true;
				break;
			}
		}
		if(f==false && i>1)
		cout<<i<<endl;
	}
}
int main()
{
	int a,b;
	cout<<"enter the range:";
	cin>>a>>b;
	cout<<endl;
	cout<<"prime numbers between the range are:"<<endl;
	prime(a,b);
	return 0;
}

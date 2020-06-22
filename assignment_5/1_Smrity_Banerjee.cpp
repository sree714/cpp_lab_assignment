/*
Write a program to find the roots of and quadratic equation of type ax2+bx+c where a is not equal to
zero.
*/


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,r1,r2;
	cout<<"enter the value of a, b and c:";
	cin>>a>>b>>c;
	cout<<endl;
	d=(b*b)-(4*a*c);
	if(d==0)
	{
		r1=((-b)/(2*a));
		r2=r1;
		cout<<"roots are real and equal"<<endl;
	}
	else if(d>0)
	{
		r1=-(b+ sqrt(d))/(2*a);
		r1=-(b- sqrt(d))/(2*a);
		cout<<"roots are real and distinct"<<endl;
	}
	else
	{
		r1=(-b)/2*a;
		r2=sqrt(-d)/(2*a);
		cout<<"roots are imaginary"<<endl;
	}
	cout<<"root1 ="<<r1<<"root2 ="<<r2<<endl;
	return 0;
}

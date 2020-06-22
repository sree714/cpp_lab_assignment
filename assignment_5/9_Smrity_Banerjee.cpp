/*
Write a program to compute sinx for given x. The user should supply x and a positive integer n. We
compute the sine of x using the series and the computation should use all terms in the series up through
the term involving xn
sin x = x - x3
/3! + x5
/5! - x
7
/7! + x9
/9! ........
*/


#include<iostream>
using namespace std;
int main()
{
	int i,j,fact,n,sign=-1;
	float x,p,sum=0;
	cout<<"enter x =";
	cin>>x; cout<<endl;
	cout<<"enter value of n:";;
	cin>>n; cout<<endl;
	for(i=1;i<=n;i+=2)
	{
		p=1;
		fact=1;
		for(j=1;j<=i;j++)
		{
			p=p*x;
			fact=fact*j;
		}
		sign=-1*sign;
		sum+=sign*p/fact;
	}
	cout<<"sin"<<x<<"="<<sum<<endl;
	return 0;
}

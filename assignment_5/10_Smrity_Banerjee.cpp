/*
Write a program to compute the cosine of x. The user should supply x and a positive integer n. We
compute the cosine of x using the series and the computation should use all terms in the series up
through the term involving xn
cos x = 1 - x
2
/2! + x4
/4! - x6
/6! .....
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
	for(i=2;i<=n;i+=2)
	{
		p=1;
		fact=1;
		for(j=1;j<=i;j++)
		{
			p=p*x;
			fact=fact *j;
		}
		sum+=sign*p/fact;
		sign=-1*sign;
	}
	cout<<"cos"<<x<<"="<<1+sum;
	return 0;
}

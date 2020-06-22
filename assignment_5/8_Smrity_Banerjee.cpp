/*
Compute the natural logarithm of 2, by adding up to n terms in the series
1 - 1/2 + 1/3 - 1/4 + 1/5 -... 1/n
where n is a positive integer and input by user
*/


#include<iostream>
using namespace std;
int main()
{
  int i,n,sign=-1;
  float sum=0;
  cout<<"enter the value of n:";
  cin>>n; cout<<endl;
  for(i=1;i<=n;i++)
  {
  	sign*= -1;
  	sum+=sign*1.0/i;
  }
  cout<<"log 2:"<<sum<<endl;
  return 0;
}

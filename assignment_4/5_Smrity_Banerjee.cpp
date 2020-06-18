/*
Write a program to determine whether the seller has made profit or incurred loss. Also determine how
much profit he made or loss he incurred. Cost price and selling price of an item is input by the user.
*/



#include<iostream>
using namespace std;
int main()
{
	int cp,sp,result;
	cout<<"enter the cost price:";
	cin>>cp;
	cout<<endl;
	cout<<"enter the selling price:";
	cin>>sp;
	cout<<endl;
	result=sp-cp;
	if(result>0)
	cout<<"profit ="<<result<<endl;
	else
	if(result<0)
	cout<<"Loss ="<< ((-1)*result);
	else
	cout<<"No profit No loss"<<endl;
    return 0;
}

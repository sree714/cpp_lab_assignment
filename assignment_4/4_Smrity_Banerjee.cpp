/*
Write a program to calculate the total expenses. Quantity and price per item are input by the user and
discount of 10% is offered if the expense is more than 5000.
*/


#include<iostream>
using namespace std;
int main()
{
	int tot,qty,pr,dis;
	cout<<"enter the quantity:";
	cin>>qty;
	cout<<endl;
	cout<<"enter the price per item:";
	cin>>pr;
	cout<<endl;
	tot=qty*pr;
	if(tot>5000)
	{
		dis=(tot*0.1);
		tot=tot-dis;
	}
	cout<<"Total expenses ="<<tot<<endl;
	return 0;
}

/*
If the ages of Ram, Sulabh and Ajay are input by the user, write a program to determine the youngest of
the three.
*/


#include<iostream>
using namespace std;
int main()
{
	int r,s,a;
	cout<<"enter the age of ram:";
	cin>>r;
	cout<<endl;
	cout<<"enter the age of sulabh:";
	cin>>s;
	cout<<endl;
	cout<<"enter the age of ajay:";
	cin>>a;
	cout<<endl;
	if(r<s && r<a)
	cout<<"Ram is the youngest one"<<endl;
	else if(s<r && s<a)
	cout<<"Sulabh is the youngest one"<<endl;
	else
	cout<<"Ajay is the youngest one"<<endl;
  return 0;
}

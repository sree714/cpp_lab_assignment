/*
Any character is entered by the user; write a program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol. The following table shows the range of
ASCII values for various characters.
*/


#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any character :";
	cin>>ch;
	cout<<endl;
	if(ch>=65&&ch<=90)
	cout<<"capital letter"<<endl;
	else if(ch>=97&&ch<=122)
	cout<<"small letter"<<endl;
	else if(ch>=48&& ch<=57)
	cout<<"digit"<<endl;
	else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
	cout<<"special symbol"<<endl;
	return 0;
}

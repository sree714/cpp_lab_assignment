/*
Write a program to check character entered is alphabet, digit or special character using library functions.
*/

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character:";
	ch=getchar();
	if(isalpha(ch))
	cout<<"Alphabet";
	else if(isdigit(ch))
	cout<<"Number";
	else
	cout<<"special character";
	return 0;
}

/*
Write a program which accept a letter and display it in uppercase letter.
*/

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any letter:";
	ch=getchar();
	ch=toupper(ch);
	cout<<"uppercase of the letter is ="<<ch;
	return 0;
}

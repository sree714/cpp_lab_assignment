/*
Write a user-defined function in C++ to read the content from a text file OUT.TXT, count and display
the number of alphabets present in it.
*/

#include<fstream>
#include<iostream>
using namespace std;
void alphabates()
{
	ifstream fin;
	fin.open("out.txt");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(isalpha(ch))
		count++;
	}
	cout<<"No of alphabates in the file are ="<<count;
	fin.close();
}
int main()
{
	alphabates();
	return 0;
}

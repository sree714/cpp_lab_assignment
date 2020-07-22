/*
Write a function to count the number of blank present in a text file named "OUT.TXT"
*/

#include<fstream>
#include<iostream>
using namespace std;
void blankspace()
{
	ifstream fin;
	fin.open("out.txt");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch==' ')
		count++;
	}
	cout<<"No of blankspace in the file are ="<<count;
	fin.close();
}
int main()
{
	blankspace();
	return 0;
}

/*
Write a function in C++ to count and display the number of lines not starting with alphabet 'A' present
in a text file "STORY.TXT".
Example:
If the file "STORY.TXT" contains the following lines,
The rose is red.
A girl is playing there.
There is a playground.
An aeroplane is in the sky.
Numbers are not allowed in the password.
*/

#include<fstream>
#include<iostream>
using namespace std;
void countlines()
{
	ifstream fin;
	fin.open("STORY1.txt");
	char str[80];
	int count=0;
	while(!fin.eof())
	{
		fin.getline(str,80);
		if(str[0]!='A')
		count++;
	}
		cout<<"No of lines not startin with 'A' in the file are ="<<count;
	fin.close();
}
int main()
{
	countlines();
	return 0;
}

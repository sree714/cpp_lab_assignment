/*
Write a function to count number of words in a text file named "OUT.TXT".
*/

#include<fstream>
#include<iostream>
using namespace std;
void countwords()
{
	ifstream fin;
	fin.open("out.txt");
	char word[30];
	int count=0;
	while(!fin.eof())
	{
		fin>>word;
		count++;
	}
	cout<<"No of words in the file are ="<<count;
	fin.close();
}
int main()
{
	countwords();
	return 0;
}

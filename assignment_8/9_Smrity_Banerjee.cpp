/*
Write a function in C++ to print the count of word the as an independent word in a text file
STORY.TXT.
for example, if the content of the file STORY.TXT is
There was a monkey in the zoo. The monkey was very naughty.
*/

#include<fstream>
#include<iostream>
#include<cstring>
using namespace std;
void countword()
{
	ifstream fin;
	fin.open("story.txt");
	char word[30];
	int count=0;
	while(!fin.eof())
	{
		fin>>word;
		if(strcmp(word,"the")==0)
		count++;
	}
	cout<<"No of words 'the' in the file are ="<<count;
	fin.close();
}
int main()
{
	countword();
	return 0;
}

/*
Write a C++ program to write number 1 to 100 in a data file NOTES.TXT.
*/

#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("Notes.TXT");
	for(int i=1;i<=100;i++)
	{
		fout<<i<<endl;
	}
	fout.close();
	return 0;
}

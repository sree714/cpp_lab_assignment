/*
Write a C++ program, which initializes a string variable to the content "Time is a great teacher but
unfortunately it kills all its pupils. Berlioz" and outputs the string to the disk file OUT.TXT. you have to
include all the header files if required.
*/

#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("out.txt");
	char str[300]="Time is a greate teacher but unfortunately it kills all its pupils.Berlioz.";
	fout<<str;
	fout.close();
	return 0;
}


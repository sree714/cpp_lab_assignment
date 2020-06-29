/*
Write a program which displays a number between 10 to 100 randomly.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n;
	srand(time(0));
	n=rand()%91 +10;
	cout<<"The randomly choosen number between 10 and 100 is:"<<n;
	return 0;
}

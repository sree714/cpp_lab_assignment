#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"\n enter the order of the matrix:";
	cin>>size;
	int a[size][size];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<"\n enter the"<<i+1<<j+1<<"value of matrix:";
			cin>>a[i][j];
		}
	}
		cout<<"\n middle row is:"<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		if(i==size/2)
		cout<<a[i][j]<<"\t";	
		}
	}
		cout<<"\n middle column is:"<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		if(j==size/2)
		cout<<a[i][j]<<"\t";	
		}
	}	
	return 0;
}


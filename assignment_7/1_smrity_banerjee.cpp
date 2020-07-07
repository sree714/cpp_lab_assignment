#include<iostream>
using namespace std;
int main()
{
	int a[5][5],d1=0,d2=0,m,i,j;
	cout<<"enter the size of square matrix (max 5):";
	cin>>m;
	cout<<"\n enter the element of the matrix row wise:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;++j)
		cin>>a[i][j];
	}
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
		{
			if(i==j)
			d1 +=a[i][j];
			if(i+j==(m-1))
			d2 +=a[i][j];
		}
	}
	cout<<"sum of principal/ left diagonals is ="<<d1<<endl;
	cout<<"sum of secondary/ right diagonals is ="<<d2<<endl;
	return 0;
}

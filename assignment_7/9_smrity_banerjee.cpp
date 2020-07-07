#include<iostream>
using namespace std;
class Report
{
	private:
			int adno;
			char name[20];
			float marks[5];
			float average;
			void getavg()
			{
				average =(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
			}
	public:
			void readinfo();
			void displayinfo();
};
void Report::readinfo()
{
	do
	{
		cout<<"\n Enter 4 digit admission number:";
		cin>>adno;
	}while (adno<999||adno>10000);
	cout<<"\n Enter Name:"; 
	cin>>name;
	cout<<"\n enter marks of 5 subjects:";
	for(int i=0;i<5;i++)
	{
		cout<<"\n subject"<<i+1<<":";
		cin>>marks[i];
	}
	getavg();
}
void Report::displayinfo()
{
	cout<<"\n Admission No. :"<<adno;
	cout<<"\n Name:"<<name;
	cout<<"\n subject 1:"<<marks[0];
	cout<<"\n subject 2:"<<marks[1];
	cout<<"\n subject 3:"<<marks[2];
	cout<<"\n subject 4:"<<marks[3];
	cout<<"\n subject 5:"<<marks[4];
	cout<<"\n Average marks ="<<average;
}
int main()
{
	Report r;
	r.readinfo();
	r.displayinfo();
	return 0;
}

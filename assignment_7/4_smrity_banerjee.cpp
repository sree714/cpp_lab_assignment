#include<iostream>
#include<cstdio>
using namespace std;
class student
{
	private: 
			int admno;
			char sname[20];
			float eng,math,science;
			float total;
			float ctotal()
			{
				return(eng+math+science);
			}
	public:
			void takedata()
			{
				cout<<"\n enter admission no:"; cin>>admno;
				cout<<"\n enter student name:"; cin>>sname;
				cout<<"\n enter 3 marks:"; cin>>eng>>math>>science;
				total=ctotal();
			}
			void showdata()
			{
				cout<<"\n admission no:"<<admno;
				cout<<"\n  Name:"<<sname;
				cout<<"\n english marks:"<<eng;			
				cout<<"\n math marks:"<<math;
				cout<<"\n science marks:"<<science;
				cout<<"\n total marks:"<<total;	
			}
};
int main()
{
	student obj;
	obj.takedata();
	obj.showdata();
	return 0;
}


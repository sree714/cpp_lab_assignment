#include<iostream>
#include<cstdio>
using namespace std;
class batsman
{
	private:
			int bcode;
			char bname[20];
			int innings,notout,runs;
			int batavg;
			void calcavg()
			{
				batavg=runs/(innings-notout);
			}
	public:
			void readdata();
			void display();		
};
void batsman::readdata()
{
	cout<<"\n enter Batsman code:"; cin>>bcode;
	cout<<"\n enter Batsman name:"; cin>>bname;
	cout<<"\n enter innings,notout,runs:"; cin>>innings>>notout>>runs;
	calcavg();				
}
void batsman::display()
{
	cout<<"\n Batsman code:"<<bcode;
	cout<<"\n  Name:"<<bname;
	cout<<"\n innings:"<<innings;			
	cout<<"\n notout:"<<notout;
	cout<<"\n runs:"<<runs;
	cout<<"\n bataverage:"<<batavg;				
}
int main()
{
	batsman obj;
	obj.readdata();
	obj.display();
	return 0;
}


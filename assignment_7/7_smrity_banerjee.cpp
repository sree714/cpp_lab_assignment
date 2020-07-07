#include<iostream>
using namespace std;
class Flight
{
	private:
			int fno;
			char destination[20];
			float distance;
			float fuel;
			float calfuel()
			{
				if(distance<=1000)
				return(500);
				else if(distance>1000 && distance<=2000)
				return(1100);
				else if(distance>2000)
				return(2200);
			}
	public:
			void feedinfo();
			void showinfo();

};
void Flight::feedinfo()
{
	cout<<"\n Flight No. :"; cin>>fno;
	cout<<"\n Destination:"; cin>>destination;
	cout<<"\n Distance:"; cin>>distance;
	fuel=calfuel();
}
void Flight::showinfo()
{
	cout<<"\n Flight No. :"<<fno;
	cout<<"\n Destination:"<<destination;
	cout<<"\n Distance:"<<distance;
	cout<<"\n Required fuel:"<<fuel;
}
int main()
{
	Flight f;
	f.feedinfo();
	f.showinfo();
	return 0;
}

/*
Write the definition for a class called time that has hours and minutes as integer. The class has the
following member functions:
void settime(int, int) to set the specified value in object
void showtime() to display time object
time sum(time) to sum two time object & return time
1. Write the definitions for each of the above member functions.
2. Write main function to create three time objects. Set the value in two objects and call sum() to
calculate sum and assign it in third object. Display all time objects.
*/

#include<iostream>
using namespace std;
class time
{
	private:
			int hours;
			int minutes;
	public:
			void settime(int h,int m)
			{
				hours=h;
				minutes=m;
			}
			time sum(time);
			void showtime();
};
time time::sum(time tm)
{
	time t;
	t.minutes=minutes+tm.minutes;
	t.hours=t.minutes/60;
	t.minutes=t.minutes%60;
	t.hours+=hours+tm.hours;
	return (t);
}
void time::showtime()
{
	cout<<hours<<"hrs"<<minutes<<"mins"<<endl;
}
int main()
{
	time t1,t2,t3;
	t1.settime(2,45);
	t2.settime(3,30);
	t3=t1.sum(t2);
	cout<<"\n 1st time=";
	t1.showtime();
	cout<<"\n 2nd time=";
	t2.showtime();
	cout<<"\n total time=";
	t3.showtime();
	return 0;
}

#include<iostream>
using namespace std;
class Rectangle
{
	private:
			 float length;
			 float width;
	public:
			void setlength(float);
			void setwidth(float);
			float perimeter();
			float area();
			void show();
			int samearea(Rectangle);
};
void Rectangle::setlength(float len)
{
	length=len;
}
void Rectangle::setwidth(float wid)
{
	width=wid;
}
float Rectangle::perimeter()
{
	return(2*length+2*width);
}
float Rectangle::area()
{
	return(length*width);
}
void Rectangle::show()
{
	cout<<"\n Length ="<<length;
	cout<<"\n Width ="<<width;
}
int Rectangle::samearea(Rectangle o)
{
	float area1=length*width;
	float area2=o.length*o.width;
	if(area1==area2)
	return 1;
	else
	return 0;
}
int main()
{
	Rectangle first;
	Rectangle second;
	first.setlength(5);
	first.setwidth(2.5);
	second.setlength(5);
	second.setwidth(18.9);
	cout<<"\n First Rectangle";
	first.show();
	cout<<"\n area ="<<first.area();
	cout<<"\n perimeter ="<<first.perimeter();
	cout<<"\n Second Rectangle";
	second.show();
	cout<<"\n area ="<<second.area();
	cout<<"\n perimeter ="<<second.perimeter();
	if(first.samearea(second))
	cout<<"\n Both Rectangle have same area";
	else
	cout<<"\n Not same ";
	first.setlength(15);
	first.setwidth(6.3);
    cout<<"\n First Rectangle";
	first.show();
	cout<<"\n area ="<<first.area();
	cout<<"\n perimeter ="<<first.perimeter();
	cout<<"\n Second Rectangle";
	second.show();
	cout<<"\n area ="<<second.area();
	cout<<"\n perimeter ="<<second.perimeter();
	if(first.samearea(second))
	cout<<"\n Both Rectangle have same area";
	else
	cout<<"\n Not same ";
	return 0;
}

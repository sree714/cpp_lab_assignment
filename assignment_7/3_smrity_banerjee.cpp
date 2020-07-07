#include<iostream>
#include<cmath>
using namespace std;
struct complex
{
	float real;
	float img;
};
int main()
{
	complex n1,n2,r;
	cout<<"\n enter the first number:";
	cin>>n1.real;
	cin>>n1.img;
	cout<<"\n enter the second number:";
	cin>>n2.real;
	cin>>n2.img;
	cout<<"\n Addition:"<<endl;
	r.real=n1.real+n2.real;
	r.img=n1.img+n2.img;
	cout<<"\n sum ="<<r.real<<"+i"<<r.img;
	cout<<"\nsubtraction:"<<endl;
	r.real=n1.real-n2.real;
	r.img=n1.img-n2.img;
	cout<<"\n sub ="<<r.real<<"+i"<<r.img;
	cout<<"\nMultiplication:"<<endl;
	r.real=(n1.real*n2.real)-(n1.img*n2.img);
	r.img=(n2.real*n1.img)+(n2.img*n1.real);
	cout<<"\n multiply ="<<r.real<<"+i"<<r.img;
	cout<<"\nDivision:"<<endl;
	r.real=((n1.real*n2.real)+(n1.img*n2.img))/(pow(n2.real,2)+pow(n2.img,2));
	r.img=((n1.img*n2.real)-(n1.real*n2.img))/(pow(n2.real,2)+pow(n2.img,2));
	cout<<"\n division ="<<r.real<<"+i"<<r.img;
	
return 0;	
}

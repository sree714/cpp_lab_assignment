/*
The marks obtained by a student in 5 different subjects are input by the user. The student gets a division
as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.
*/

#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4,s5,p;
	cout<<"enter the number of 5 subjects:";
	cin>>s1>>s2>>s3>>s4>>s5;
	cout<<endl;
	p=(s1+s2+s3+s4+s5)/5;
	if(p>=60)
	cout<<"first division"<<endl;
	else if(p>=50)
	cout<<"second division"<<endl;
	else if(p>=40)
	cout<<"third division"<<endl;
	else
	cout<<"fail"<<endl;
	return 0;
}

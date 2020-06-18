/*
In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input by the user write a program to find his gross salary.
*/


#include<iostream>
using namespace std;
int main()
{
	float basic,gross,da,hra;
	cout<<"enter the basic salary:";
	cin>>basic;
	cout<<endl;
	if(basic<1500)
	{
		hra=(0.1*basic);
		da=(0.9*basic);
	}
	else
	{
		hra=500;
		da=(0.98*basic);
	}
	gross=basic+da+hra;
	cout<<"The gross salary of the employee is ="<<gross<<endl;
	return 0;
}

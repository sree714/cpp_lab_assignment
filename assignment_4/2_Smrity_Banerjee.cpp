/*
Write a program that takes length as input in feet and inches. The program should then convert the
lengths in centimetres and display it on screen. Assume that the given lengths in feet and inches are
integers.
Based on the problem, you need to design an algorithm as follows:
1. Get the length in feet and inches.
2. Convert the length into total inches.
3. Convert total inches into centimetres.
4. Output centimetres.
To calculate the equivalent length in centimetres, you need to multiply the total inches by 2.54. Instead
of using the value 2.54 directly in the program, you will declare this value as a named constant.
Similarly, to find the total inches, you need to multiply the feet by 12 and add the inches. Instead of
using 12 directly in the program, you will also declare this value as a named constant. Using a named
constant makes it easier to modify the program later.
*/



#include<iostream>
using namespace std;
const double cpi=2.54;
const int ipf=12;

int main()
{
	int feet,inch;
	int totalinch;
	double cm;
	cout<<"enter the length in feet and inches:";
	cin>>feet>>inch;
	cout<<endl;
	totalinch= (ipf*feet)+inch;
	cout<<"Total inches= "<<totalinch<<endl;
	cm=cpi*totalinch;
	cout<<"length in centimeter ="<<cm<<endl;
	return 0;
}

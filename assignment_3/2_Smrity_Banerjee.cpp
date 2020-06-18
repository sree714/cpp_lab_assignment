/*
Write a program which accept temperature in Fahrenheit and print it in centigrade.
*/

#include<iostream>
using namespace std;

int main()
{
    float f,c;
    cout<<"F = ";
    cin>>f;
    c=((f-32)*5)/9;

    cout<<"C = "<<c;

    return 0;
}

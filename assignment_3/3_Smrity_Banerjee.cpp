/*
Write a program which accept principle, rate and time from user and print the simple interest.
*/


#include<iostream>
using namespace std;

int main()
{

    float p,t,r;
    float s;

    cin>>p>>t>>r;
    s=(p*t*r)/100;
    cout<<s;

    return 0;
}

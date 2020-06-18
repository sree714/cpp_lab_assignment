/*
Write a program to check whether the given number is even or odd (using ? : ternary operator)
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    (n%2==0)?cout<<"Number is Even :)":cout<<"Number is Odd :(";

    return 0;
}

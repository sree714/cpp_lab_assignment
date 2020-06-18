/*
Write a program to check whether the given number is positive or negative (using ? : ternary
operator )
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    (n>0)?cout<<"Number is Positive":cout<<"Number is Negative";

    return 0;
}

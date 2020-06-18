/*
Write a program which accepts a character and display its next character
*/

#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter char: ";
    cin>>c;
    if((!(c=='z') && !(c == 'Z'))){
        cout<<"Next char: "<<++c;
    }
    else{
        cout<<"enter 'a/A' to 'y/Y'";
    }

    return 0;
}

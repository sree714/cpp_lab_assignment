/*
Write a C++ program to implement the Number Guessing Game. In this game the computer chooses a
random number between 1 and 100, and the player tries to guess the number in as few attempts as
possible. Each time the player enters a guess, the computer tells him whether the guess is too high, too
low, or right. Once the player guesses the number, the game is over.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n,g,t=0;
	srand(time(0));
	n=rand()%100 +1;
	cout<<"Guess number";
	do
	{
		cout<<"enter your guess between 1 and 100:";
		cin>>g;
		t++;
		cout<<endl;
        if(g>n)
		cout<<"too high..try again"<<endl;
		else if(g<n)
		cout<<"too low..try again"<<endl;
		else
		cout<<"you guess right in =\t "<<t<<"\t tries"<<endl;
	}while(g!=n);
	return 0;
}

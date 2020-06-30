//Name:Smrity Banerjee
//Roll:18801019070
#include<iostream>
using namespace std;
class Musicians {
protected:
	char string[5][15] = { "veena", "guitar", "sitar", "sarod" ,"mandolin" };
	char wind[5][15] = { "flute", "clarinet", "saxophone", "nadhaswaram" , "piccolo" };
	char perc[5][15] = { "tabla", "mridangam", "bangos", "drums","tambour" };
	char inst[3][15] = { "String ","Wind ","Percussion " };
};
class TypeIns :public Musicians {
public:
	void get();
	void show();
	void show(char[5][15],int n);
};
void TypeIns::get()
{
	cout << "Type of instruments to be displayed: " << endl;
	cout << "press 1. for String Instruments " << endl;
	cout << "press 2. for  Wind Instruments " << endl;
	cout << "press 3. for Percussion Instruments" << endl;
}
void TypeIns::show()
{
	int n;
	cout << "Enter the instrument to be displayed:";
	cin >> n;
	switch(n){
	case 1:
		TypeIns::show(string, 1);
		break;
	case 2:
		TypeIns::show(wind, 2);
		break;
	case 3:
		TypeIns::show(perc, 3);
		break;
	default:
		cout << "Invalid";
		exit(1);
	}
}
void TypeIns::show(char s[5][15],int n)
{
	char ch='p';
	for (int i = 0;ch!=0;i++)
	{
		cout << inst[n-1][i];
		ch = inst[n-1][i + 1];
	}
	cout << "Instruments:" << endl;
	ch = 'x';
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;ch != 0;j++)
		{
			cout << s[i][j];
			ch = s[i][j+1];
		}
		cout << endl;
		ch = 'x';

	}
}
int main()
{
	TypeIns inst;
	inst.get();
	inst.show();
	return 0;
}

//Name:Smrity Banerjee
//Roll:18801019070
#include<iostream>
using namespace std;
class Tool
{
	private: int strength;
	public:
		char type;
		Tool(){}
		Tool(int s)
		{
		this->strength=s;
		}
		void setstrength(int n)
		{
		this->strength=n;
		}
		int getstrength()
		{
			return(strength);
		}
};
class Scissors:public Tool
{
	public:
			Scissors(){}
			Scissors(int s)
			{
				setstrength(s);
				type='s';
			}
			bool fight(Tool tool);
};
class Rock:public Tool
{
	public:
		Rock(){}
		Rock(int n)
		{
			setstrength(n);
			type='r';
		}
		bool fight(Tool tool);
};
class Paper:public Tool
{
	public:
		Paper(){}
		Paper(int s)
		{
			setstrength(s);
			type='p';
		}
		bool fight(Tool tool);
};
bool Scissors::fight(Tool tool)
{
	double factor=1.0;
	if(tool.type=='p')
	{
		factor*=2;
	}
	if(tool.type=='r')
	{
		factor/=2;
	}
	return (factor*this->getstrength()>tool.getstrength());
}
bool Paper::fight(Tool tool)
{
	double factor= 1.0;
	if(tool.type=='r')
	factor*=2;
	if(tool.type=='s')
	factor/=2;
	return (factor*this->getstrength()>tool.getstrength());
}
bool Rock::fight(Tool tool)
{
	double factor=1.0;
	if(tool.type=='s')
	factor*=2;
	if(tool.type='p')
	factor/=2;
	return(factor*this->getstrength()>tool.getstrength());
}
int main()
{
	Scissors ob(4);
	Paper p(7);
	Rock r(8);
	cout<<ob.fight(p)<<p.fight(ob);
	cout<<p.fight(r)<<r.fight(p);
	cout<<r.fight(ob)<<ob.fight(r);
	return 0;
}

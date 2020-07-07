#include<iostream>
using namespace std;
class Test
{
	private:
			int testcode;
			char description[30];
			int nocandidate;
			int centerreqd;
			int calcntr()
			{
				return(nocandidate/100+1);
			}
	public:
			void schedule();
			void disptest();
};
void Test::schedule()
{
	cout<<"\n Test code:"; cin>>testcode;
	cout<<"\n Description:"; cin>>description;
	cout<<"\n Number of candidates:"; cin>>nocandidate;
	centerreqd =calcntr();
}
void Test::disptest()
{
	cout<<"\n Test code:"<<testcode;
	cout<<"\n Description:"<<description;
	cout<<"\n Number of candidates:"<<nocandidate;
	cout<<"\n Number of centers required:"<<centerreqd;
}
int main()
{
	Test obj;
	obj.schedule();
	obj.disptest();
	return 0;
}

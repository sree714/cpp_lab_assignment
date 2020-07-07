#include<iostream>
using namespace std;
class Book
{
	private:
			int bookno;
			char booktitle[20];
			float price;
			void totalcost(int n)
			{
				float tcost;
				tcost=price*n;
				cout<<tcost;
			}
	public:
			void input();
			void purchase();
};
void Book::input()
{
	cout<<"\n Book No. :"; cin>>bookno;
	cout<<"\n Book title:"; cin>>booktitle;
	cout<<"\n price:"; cin>>price;
}
void Book::purchase()
{
	cout<<"\n Enter the number of books:";
	int n;
	cin>>n;
	cout<<"\n Total cost is =";
	totalcost(n);
}
int main()
{
	Book b;
	b.input();
	b.purchase();
	return 0;
}

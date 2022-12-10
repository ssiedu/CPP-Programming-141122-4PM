#include<iostream>
using namespace std;
class Base
{
	public:
		void display()
		{
			cout<<"\n display function in base class";
		}
};
class Derive : public Base
{
	public:
		void display()
		{
			cout<<"\n display function in derive class";
		}
};

int main()
{
	Base *b;
	Derive d;
	b=&d;
	b->display();
	return 0;
}






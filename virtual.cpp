#include<iostream>
using namespace std;
class Base 
{
	public:
		virtual void print()
		{
			cout<<"\n print function in base class";
		}
		void show()
		{
			cout<<"\n show function in base class";
		}
};
class Derive : public Base
{
	public:
		void print()
		{
			cout<<"\n print function in derive class";
		}
		void show()
		{
			cout<<"\n show function in derive class";
		}
};
int main()
{
	Base *p;
	Derive d;
	p=&d;
	p->print();
	p->show();
	return 0;
}

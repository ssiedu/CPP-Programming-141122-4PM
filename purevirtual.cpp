#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void display()=0;
};
class Derive : public Base
{
	public:
		void display()
		{
			cout<<"\n Definition of base class define in a derive class";
		}
};
int main()
{
	Base *p;
	Derive d;
	p=&d;
	p->display();
	return 0;
}

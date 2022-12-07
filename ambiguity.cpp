#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"\n  Class  A";
		}
};
class B
{
 	public:
	 void display()
	 {
	 	cout<<"\n class B";
	}	
};
class C : public A, public B
{
	public:
		void print()
		{
			B::display();
			A::display();
		}
};

int main()
{
	C obj;
	obj.print();
	return 0;
}






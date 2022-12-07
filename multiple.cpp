#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		public:
			void get_x()
			{
				cout<<"\n Enter the value of x : ";
				cin>>x;
			}
};
class B
{
	protected:
		int y;
		public:
			void get_y()
			{
				cout<<"\n Enter the value of y : ";
				cin>>y;
			}
};
class C
{
	protected:
		int z;
		public:
			void get_z()
			{
				cout<<"\n Enter the value of z : ";
				cin>>z;
			}
};

class D : public A, public B, public C
{
	int product;
	public:
		void calculate_product()
		{
			product=x*y*z;
			cout<<"\n Product of Three Numbers : "<<product;
		}
};

int main()
{
	D obj;
	obj.get_x();
	obj.get_y();
	obj.get_z();
	obj.calculate_product();
	return 0;
}


















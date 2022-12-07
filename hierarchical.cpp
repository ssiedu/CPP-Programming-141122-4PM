#include<iostream>
using namespace std;
class A
{
	protected:
	int x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of x : ";
			cin>>x;
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
};
class B : public A
{
	int sum;
	public:
		void getsum()
		{
			sum=x+y;
			cout<<"\n sum of two numbers : "<<sum;
		}
};
class C : public A
{
	int mul;
	public:
		void getmul()
		{
			mul=x*y;
			cout<<"\n mul of two numbers : "<<mul;
		}
};
class D : public A
{
	int sub;
	public:
		void getsub()
		{
			sub=x-y;
			cout<<"\n sub of two numbers : "<<sub;
		}
};
int main()
{
	B obj1;
	C obj;
	D obj2;
	obj1.getdata();
	obj1.getsum();
	obj.getdata();
	obj.getmul();
	obj2.getdata();
	obj2.getsub();
	return 0;
}






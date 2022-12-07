#include<iostream>
using namespace std;
class A
{
	protected:
	int a,b;
	public:
		void getnum(int x,int y)
		{
			a=x;
			b=y;
		}
};
class B : public A
{
	protected:
		int sum;
		public:
			void getsum()
			{
				sum=a+b;
			}
};
class C
{
	protected:
		int m,n,mul;
		public:
			void getdata(int x, int y)
			{
				m=x;
				n=y;
			}
			void getmul()
			{
				mul=m*n;
			}
};
class D : public B, public C
{
	public:
		void display()
		{
			cout<<"\n sum of two numbers : "<<sum;
			cout<<"\n mul of two numbers : "<<mul;
		}
};

int main()
{
	int x,y;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	D obj;
	obj.getnum(x,y);
	obj.getsum();
	obj.getdata(x,y);
	obj.getmul();
	obj.display();
	return 0;
}












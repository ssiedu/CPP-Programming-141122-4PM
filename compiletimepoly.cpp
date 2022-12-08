#include<iostream>
using namespace std;
class A
{
	public:
		void sum(int a, int b)
		{
			cout<<"\n sum of two numbers : "<<a+b;
		}
};
class B : public A
{
	public:
		void sum(float a , float b)
		{
			cout<<"\n sum of two float numbers : "<<a+b;
		}
};
int main()
{
	A obj1;
	obj1.sum(1,20);
	B obj;
	obj.sum(10,20);
	obj.sum(12.3,2.1);
	return 0;
}

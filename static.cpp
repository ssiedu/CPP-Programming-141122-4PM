#include<iostream>
using namespace std;
class Test
{
	int code;
	static int count;
	public:
		void setvalue()
		{
			code=++count;
		}
		void showcode()
		{
			cout<<"\n Number of object : "<<code;
		}
		static void showcount()
		{
			cout<<"\n value of count : "<<count;
		}
};
int Test::count;// definition of static data member;
int main()
{
	Test t1,t2;
	t1.setvalue();
	t2.setvalue();
	Test::showcount();
	Test t3;
	t3.setvalue();
	Test::showcount();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	return 0;
}











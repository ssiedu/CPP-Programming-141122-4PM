#include<iostream>
using namespace std;
class count
{
	int value;
	public:
		count()
		{
			value=10;
		}
		void operator ++()
		{
			value=value+2;
		}
		void display()
		{
			cout<<"\n value is : "<<value;
		}
};
int main()
{
	count c1;
	++c1;
	c1.display();
	return 0;
}

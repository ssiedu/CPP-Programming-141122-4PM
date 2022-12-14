#include<iostream>
#include<math.h>
using namespace std;
class square
{
	float num,res;
	public:
		void getdata()
		{
			cout<<"\n Enter any number : ";
			cin>>num;
		}
		void calculate()
		{
			res=sqrt(num);
		}
		void display()
		{
			cout<<"\n square of a number is : "<<res;
		}
};
int main()
{
	square s;
	s.getdata();
	s.calculate();
	s.display();
	return 0;
}

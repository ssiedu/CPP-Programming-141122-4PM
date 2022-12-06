#include<iostream>
using namespace std;
class First  // Base class
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
class Second : public First  // Derive class
{
	int sum;
	public:
		void calculate()
		{
			sum=x+y;
			cout<<"\n Sum of two Numbers : "<<sum;
		}
};
int main()
{
	Second s;
	s.getdata();
	s.calculate();
	return 0;
}








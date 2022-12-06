#include<iostream>
using namespace std;
class First
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
class Second : public First
{
	protected:
		int sum;
		public:
			void calculate()
			{
				sum=x+y;
			}
};
class Third : public Second
{
	public:
		void display()
		{
			cout<<"\n sum of two numbers : "<<sum;
		}		
};

int main()
{
	Third t;
	t.getdata();
	t.calculate();
	t.display();
	return 0;
}






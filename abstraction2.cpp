#include<iostream>
using namespace std;
class Sum
{
	int num1,num2,sum;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>num1;
			cout<<"\n Enter Second Number : ";
			cin>>num2;
		}
		void getsum()
		{
			
			sum=num1+num2;
		}
		void display()
		{
			cout<<"\n sum is : "<<sum;
		}
};
int main()
{
	Sum s;
	s.getdata();
	s.getsum();
	s.display();
	return 0;
}

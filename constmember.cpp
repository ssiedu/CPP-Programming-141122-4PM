#include<iostream>
using namespace std;
class Number
{
	int num1,num2,sum;
	public:
		void getdata();
		void display() const
		{
			cout<<"\n Number1 is : "<<num1;
			cout<<"\n Number2 is : "<<num2;
			//sum=num1+num2;
			cout<<"\n Sum is  : "<<sum;
		}
};
void Number :: getdata()
{
	cout<<"\n Enter First Value : ";
	cin>>num1;
	cout<<"\n Enter Second Value : ";
	cin>>num2;
	sum=num1+num2;
}
int main()
{
	Number n;
	n.getdata();
	n.display();
	return 0;
}





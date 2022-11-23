#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\n Enter First Number : ";cin>>a;
	cout<<"\n Enter Second Number : ";cin>>b;
	char ch;
	cout<<"\n Enter your choice like (+,-,*) : ";
	cin>>ch;
	
	switch(ch)
	{
		case '+':
			cout<<"\n Addition is : "<<a+b<<endl;
			break;
		case '-':
			cout<<"\n Subtraction : "<<a-b<<endl;
			break;
		case '*':
			cout<<"\n Multiplication : "<<a*b<<endl;
			break;
		default:
			cout<<"\n Please Enter valid choice"<<endl;
			break;
	}
	return 0;
	
}

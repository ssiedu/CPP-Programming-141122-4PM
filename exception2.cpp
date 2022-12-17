#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	try
	{
		if(b==0)
		throw b;
		else if(b>a)
		throw "not allowed - denominator is greater than numerator ";
		else
		cout<<"\n value of a/b : "<<a/b;
	}
	catch(int ex1)
	{
		cout<<"you can not declare "<<ex1<<" as a denominator ";
	}
	catch (char const* ex2)
	{
		cout<<ex2;
	}
	return 0;
}

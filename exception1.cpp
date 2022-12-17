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
		else
		 {
		 	c=a/b;
		 	cout<<"\n value of c : "<<c;
		 }
	}
	catch(int ex1)
	{
		cout<<"you can not declare "<<ex1<< " as a denominator ";
	}	
	
	return 0;
}

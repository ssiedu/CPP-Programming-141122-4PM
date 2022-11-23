#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter Number : ";
	cin>>num;
	
	if(num==0)
		cout<<"Number is Zero"<<endl;
	else if(num>0)
	{
		cout<<"Positive Number"<<endl;
		if(num%2==0)
			cout<<"Even Number"<<endl;
		else
			cout<<"Odd Number"<<endl;
	}
	else
	{
		cout<<"Negative Number "<<endl;
		if(num%2==0)
			cout<<"Even Number "<<endl;
		else
			cout<<"Odd Number "<<endl;
	}
	return 0;
}

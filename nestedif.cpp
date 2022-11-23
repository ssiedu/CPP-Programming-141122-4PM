#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter number : ";
	cin>>num;
	
	if(num!=0)
	{
		cout<<"Number is not eqaul to Zero "<<endl;
		if(num>0)
			cout<<"Positive number"<<endl;
		else
			cout<<"Negative Number "<<endl;
	}
	else
		cout<<"Number is zero"<<endl;
	
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	
	if(num==0)
		cout<<"Number is Zero"<<endl;
	else if(num>0)
		cout<<"Positive Number"<<endl;
	else
		cout<<"Negative Number"<<endl;
	return 0;
}

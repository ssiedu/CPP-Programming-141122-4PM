#include<iostream>
using namespace std;
int main()
{
	int num,flag=0;
	cout<<"\n Enter any number : ";
	cin>>num;
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
		cout<<"\n Number is not prime ";
	else
		cout<<"\n Number is prime";
	
}

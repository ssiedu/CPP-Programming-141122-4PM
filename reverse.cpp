#include<iostream>
using namespace std;
int main()
{
	int rev=0,num,temp,sod=0,tod=0;
	cout<<"\n Enter any Number : ";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		rev= rev*10+num%10;
		sod=sod+num%10;
		tod=tod+1;
		num=num/10;
	}
	cout<<"\n reverse Number : "<<rev;
	cout<<"\n sum of digit : "<<sod;
	cout<<"\n Total Number of Digit : "<<tod;
	if(temp==rev)
		cout<<"\n Number is pallindrome ";
	else
		cout<<"\n Number is not pallindrome ";
	return 0;
	
}

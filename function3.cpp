#include<iostream>
using namespace std;
int product();
int main()
{
	int res=product();
	cout<<"\n product of three number : "<<res;
	return 0;
}
int product()
{
	int a,b,c;
	cout<<"\n Enter First number : ";cin>>a;
	cout<<"\n Enter Second Number : ";cin>>b;
	cout<<"\n Enter Third Number : ";cin>>c;
	return a*b*c;
	
}

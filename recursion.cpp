#include<iostream>
using namespace std;
int number(int n);
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	int res=number(num);
	cout<<"\n sum of natural number : "<<res;
	return 0;
}
int number(int n)
{
	if(n==0)
		return 0;
	else
		return n+number(n-1);
}

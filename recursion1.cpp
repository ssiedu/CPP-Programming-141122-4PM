#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	int res=fact(num);
	cout<<"\n factorial of a number is : "<<res;
	return 0;
}
int fact (int n)
{
	if(n==1)
		return 1;
	else 
		return n*fact(n-1);
}

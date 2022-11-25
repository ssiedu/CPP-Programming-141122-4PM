#include<iostream>
using namespace std;
void fact(int n);
int main()
{
	int num;
	cout<<"\n Enter any Number : ";
	cin>>num;
	fact(num);
	return 0;
}
void fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
		f=f*i;
	cout<<"\n factorial of a number is : "<<f;
}

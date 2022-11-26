#include<iostream>
using namespace std;
void exchange(int a, int b);
int main()
{
	int x,y;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	exchange(x,y);//call by value
	cout<<"\n After function call : \n";
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
	return 0;
}
void exchange(int a , int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"\n value of a : "<<a;
	cout<<"\n value of b : "<<b;
}

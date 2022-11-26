// call by address
#include<iostream>
using namespace std;
void exchange(int *a, int *b);
int main()
{
	int x,y;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	exchange(&x,&y);//call by address
	cout<<"\n After Function call : \n";
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
}
void exchange(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<"\n value of a : "<<*a;
	cout<<"\n value of b : "<<*b;
}

#include<iostream>
using namespace std;
void square();//function declaration
int main()
{
	square();//function call
	return 0;
}
void square()  //function definition
{
	int n;
	cout<<"\n Enter any number : ";
	cin>>n;
	cout<<"\n square of a number is : "<<n*n;
}

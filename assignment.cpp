#include<iostream>
using namespace std;
int main()
{
	int a=10,b=5;
	a+=b;//a=a+b
	cout<<"\n value of a : "<<a<<endl<<"value of b : "<<b;//a=15,b=5
	b-=a;//b=b-a
	cout<<"\n value of a : "<<a<<endl<<"value of b : "<<b;//a=15,b=-10
	a*=b;//a=a*b
	cout<<"\n value of a : "<<a<<endl<<"value of b : "<<b;//a=-150 b=-10
	a/=b;//a=a/b
	cout<<"\n value of a : "<<a<<endl<<"value of b : "<<b;//a=15 b=-10
	a%=b;//a=a%b
	cout<<"\n value of a : "<<a<<endl<<"value of b : "<<b;//a=5 b=-10
	return 0;
}

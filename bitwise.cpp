//Bitwise Operator 
#include<iostream>
using namespace std;
int main()
{
	int a=5,b=10;
	cout<<"\n Bitwise and : "<<(a&b);
	cout<<"\n Bitwise Or  : "<<(a|b);
	cout<<"\n Bitwise Not : "<<(~a);
	cout<<"\n Bitwise XOR : "<<(a^b);
	cout<<"\n Bitwise Left shift : "<<(a<<1);
	cout<<"\n Bitwise Right shift : "<<(a>>1);
	return 0;
}

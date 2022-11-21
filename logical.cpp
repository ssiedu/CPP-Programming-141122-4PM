#include<iostream>
using namespace std;
int main()
{
	int a=30,b=51;
	
	cout<<"\n AND Operator : "<<((a>b && a>=b)); //0
	cout<<"\n OR Operator  : "<<((a>b || a<=b));//1
	cout<<"\n AND Not Operator : "<<!((a>b && a!=b));//1
	cout<<"\n OR Not Operator  : "<<((a<b || !(a==b)));//1
	cout<<"\n AND OR NOT operator : "<<(!(a>b) &&((a!=b) || (a>=b)));//1
	return 0;
}

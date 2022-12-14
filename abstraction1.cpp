#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float base,exponent,result;
	cout<<"\n Enter Base Number : ";
	cin>>base;
	cout<<"\n Enter Exponent : ";
	cin>>exponent;
	result = pow(base,exponent);
	cout<<"\n result is : "<<result;
	return 0;
}

#include<iostream>
using namespace std;
template<typename T,typename U=float>
U add(T num1, U num2)
{
	U result;
	result=num1+num2;
	return result;
}
int main()
{
	float r1;
	r1=add<int,float>(10,11.22);
	cout<<"\n Addition of two numbers : "<<r1;
	float r2;
	r2=add<int>(11,5.2);
	cout<<"\n Addition of two numbers : "<<r2;
	return 0;
}


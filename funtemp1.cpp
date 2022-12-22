#include<iostream>
using namespace std;
template<typename T>
T add(T num1, T num2)
{
	T result;
	result=num1+num2;
	return result;
}
int main()
{
	int r1,a,b;
	double r2;
	float r3;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	r1=add<int>(a,b);
	cout<<"Addition of two integer value : "<<r1;
	r2=add<double>(11.2,45.6);
	cout<<"\n Addition of two double value : "<<r2;
	r3=add<float>(12.3,4.5);
	cout<<"\n Addition of two float value : "<<r3;
	return 0;
}

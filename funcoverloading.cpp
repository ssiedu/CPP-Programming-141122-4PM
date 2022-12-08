#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}
int sum(int a, int b, int c)
{
	return a+b+c;
}
float sum(float a, float b)
{
	return a+b;
}
int main()
{
	cout<<"\n sum of two integer value : "<<sum(10,20);
	cout<<"\n sum of two float value : "<<sum(2.3f,1.1f);
	cout<<"\n sum of three int value : "<<sum(1,2,3);
	return 0;
}

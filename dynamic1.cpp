#include<iostream>
using namespace std;
int main()
{
	int *numInt;
	float *numFloat;
	
	numInt = new int;
	numFloat = new float;
	
	*numInt = 101;
	*numFloat = 123.45;
	
	cout<<"\n Integer value : "<<*numInt;
	cout<<"\n Float value : "<<*numFloat;
	
	delete numInt;
	delete numFloat;
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char fruit[]="Mango";
	char f[20];
	do
	{
		cout<<"\n Enter Fruit Name : ";
		cin>>f;
	}while(strcmp(fruit,f)!=0);
	
	cout<<"\n Answer is correct!";
	return 0;
}

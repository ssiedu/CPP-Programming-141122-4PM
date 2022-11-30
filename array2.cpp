#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i, n;
	cout<<"\n How many Elements do u want to enter : ";
	cin>>n;
	cout<<"\n Enter Array elements : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	cout<<"\n Array Elements Are : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

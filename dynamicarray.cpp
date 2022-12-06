#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"\n Enter Number of student : ";
	cin>>num;
	float *ptr;
	ptr= new float[num];
	cout<<"\n Enter Percentage of student : \n";
	for(i=0;i<num;i++)
	{
		cout<<"\n student "<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<"\n Display Percentage of student : \n";
	for(i=0;i<num;i++)
	{
		cout<<"\n student percentage  "<<i+1<<" : "<<*(ptr+i);
	}
	delete[] ptr;
	return 0;
}

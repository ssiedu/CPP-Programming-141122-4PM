#include<iostream>
using namespace std;
int main()
{
	int x=0,y=1,z,n,i=1;
	cout<<"\n Enter number :";
	cin>>n;
	cout<<x<<"\t"<<y;
	while(i<n-1)
	{
		z=x+y;
		cout<<"\t"<<z;
		x=y;
		y=z;
		i++;	
	}
	return 0;
}

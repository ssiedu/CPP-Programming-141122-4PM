#include<iostream>
using namespace std;
int Min(int a,int b,int c);
int main()
{
	int x,y,z,res;
	cout<<"\n Enter First value : ";
	cin>>x;
	cout<<"\n Enter Second Value : ";
	cin>>y;
	cout<<"\n Enter Third value : ";
	cin>>z;
	res=Min(x,y,z);
	cout<<"\n Smallest value : "<<res;
	return 0;
	
}
int Min(int a, int b, int c)
{
	if(a<b && a<c)
		return a;
	else if(b<c) 
		return b;
	else
		return c;
}



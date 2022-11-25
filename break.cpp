#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		if(i>5)
		goto abc; //continue;//break;
		cout<<"\t"<<i;
	}
	abc:cout<<"\n Hello! This is gotot statement ";
	return 0;
}

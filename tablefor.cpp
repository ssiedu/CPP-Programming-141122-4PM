#include<iostream>
using namespace std;
int main()
{
	int i,n,t;
	cout<<" Enter any Number : ";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		t=n*i;
		cout<<n<<" * "<<i<<" = "<<t<<endl;
	}
	return 0;
}

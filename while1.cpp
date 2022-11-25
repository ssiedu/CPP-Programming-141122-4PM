#include<iostream>
using namespace std;
int main()
{
	int i,t,n;
	cout<<"\n Enter any Number : ";
	cin>>n;
	i=1;
	while(i<=10)
	{
		t=n*i;
		cout<<n<<" * "<<i<<" = "<<t<<endl;
		i=i+1;
	}
	return 0;
}

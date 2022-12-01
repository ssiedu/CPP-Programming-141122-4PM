#include<iostream>
using namespace std;
inline void cube(int n)
{
	cout<<"\n cube of a number : "<<n*n*n<<endl;
}
int main()
{
	int num;
	cout<<"\n Enter any number : ";
	cin>>num;
	cube(num);//cout<<"\n cube of a number : "<<n*n*n<<endl;
	cube(5);//cout<<"\n cube of a number : "<<n*n*n<<endl;
	cube(4);//cout<<"\n cube of a number : "<<n*n*n<<endl;
	return 0;
}

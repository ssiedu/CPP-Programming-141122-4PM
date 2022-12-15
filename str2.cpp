#include<iostream>
using namespace std;
int main()
{
	char str1[25];
	//string str1;
	cout<<"\n Enter String : ";
	//cin>>str1;
	cin.getline(str1,5);
	cout<<"\n String is : "<<str1;
	return 0;
}

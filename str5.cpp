#include<iostream>
using namespace std;
int main()
{
	string str1="Ssidigital";
	string str2;
	int len;
	
	len = str1.size();
	cout<<"\n string size : "<<len;
	
	str2 = str1;
	cout<<"\n str 2 is : "<<str2;
	
	string str3 = str1+str2;
	cout<<"\n string concatination : "<<str3;
	
	return 0;
}

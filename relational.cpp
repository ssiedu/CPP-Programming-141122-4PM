#include<iostream>
using namespace std;
int main()
{
	int f_num,s_num;
	cout<<"\n Enter First Number : ";
	cin>>f_num;//20
	cout<<"\n Enter Second Number : ";
	cin>>s_num;//10
	
	cout<<"Greater Than : "<<(f_num>s_num)<<endl;//1
	cout<<"Less Than    : "<<(f_num<s_num)<<endl;//0
	cout<<"Greater equal : "<<(f_num>=s_num)<<endl;//1
	cout<<"Less Equal    : "<<(f_num<=s_num)<<endl;//0
	cout<<"Equal too     : "<<(f_num==s_num)<<endl;//0
	cout<<"Not Equal too : "<<(f_num!=s_num)<<endl;//1
	
	return 0;
}

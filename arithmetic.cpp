#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int f_num,s_num;
	cout<<"\n Enter First Number : ";
	cin>>f_num;
	cout<<"\n Enter Second Number : ";
	cin>>s_num;
	
	cout<<fixed;
	cout<<"   Addition is : "<<f_num+s_num<<endl;
	cout<<"Subtraction is : "<<f_num-s_num<<endl;
	cout<<"Multiplication : "<<f_num*s_num<<endl;
	cout<<" Division      : "<<setprecision(2)<<(float)f_num/s_num<<endl;
	cout<<" Modulus       : "<<f_num%s_num<<endl;
	
	return 0;
	
}

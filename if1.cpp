#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"\n Enter Age of Person : ";
	cin>>age;
	if(age>=18)
	   cout<<"Person is eligible for vote";
	
	if(age<18 && age>0)
		cout<<"Person is not eligible for vote ";
		
	if(age<=0)
		cout<<"Person does not exist ";
	return 0;   
	
}

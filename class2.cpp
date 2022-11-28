#include<iostream>
using namespace std;
class Employee
{
	
	int id;
	int age;
	char name[20];
	float sal;
	public:
		void getData()
		{
			cout<<"\n Enter Employee id : ";
			cin>>id;
			cout<<"\n Enter Employee Name : ";
			cin>>name;
			cout<<"\n Enter Employee Age : ";
			cin>>age;
			cout<<"\n Enter Employee salary : ";
			cin>>sal;
		}
		void display()
		{
			cout<<"\n Employee id     : "<<id;
			cout<<"\n Employee Name   : "<<name;
			cout<<"\n Employee Age    : "<<age;
			cout<<"\n Employee salary : "<<sal;
		}
};
int main()
{
	Employee e;
	e.getData();
	e.display();
	return 0;
	
}





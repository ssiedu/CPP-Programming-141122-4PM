#include<iostream>
using namespace std;
class Employee
{
	public:
		int age,sal;
		Employee(int x,int y)
		{
			age=x;
			sal=y;
		}
		
};
int main()
{
	Employee e1(20,45000);
	Employee e2(30,66000);
	Employee e3(40,77000);
	cout<<"\n Age of employee 1 : "<<e1.age<<"\t"<<e1.sal;
	cout<<"\n Age of employee 2 : "<<e2.age<<"\t"<<e2.sal;
	cout<<"\n Age of Employee 3 : "<<e3.age<<"\t"<<e3.sal;
	return 0;
}

#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		Employee(int x)
		{
			age=x;
		}
		Employee(const Employee &y)
		{
			age=y.age;
		}
};
int main()
{
	Employee e1(40);
	Employee e2=e1;
	Employee e3(e1);
	cout<<"\n Age of Employee1 : "<<e1.age;
	cout<<"\n Age of Employee2 : "<<e2.age;
	cout<<"\n Age of Employee3 : "<<e3.age;
	return 0;
}





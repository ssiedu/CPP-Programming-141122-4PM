#include<iostream>
using namespace std;
class Employee
{
	public:
	int age;
	
		Employee()
		{
			age=40;
		}
		
};
int main()
{
	Employee e;
	cout<<"\n age of Employee : "<<e.age<<endl;
	return 0;
}

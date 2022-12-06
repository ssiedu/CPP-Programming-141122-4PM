#include<iostream>
using namespace std;
class Student
{
	int rollno;
	string name;
	float per;
	public:
		Student(int a, string ch,float c)
		{
			rollno=a;
			name=ch;
			per=c;
		}
		void display()
		{
			cout<<"\n Student roll no : "<<rollno;
			cout<<"\n student Name    : "<<name;
			cout<<"\n Student Percentage : "<<per;
		}
		
};
int main()
{
	Student *ptr= new Student(101,"Ram",88);
	ptr->display();
	delete ptr;
	return 0;
}






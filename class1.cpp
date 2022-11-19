#include<iostream>
using namespace std;
class student
{
	
	int rno;
	char name[10];
	float per;
	public:
	void getdata()
	{
		cout<<" Enter student roll no : ";
		cin>>rno;
		cout<<"\n Enter student name : ";
		cin>>name;
		cout<<"\n Entewr student percentage : ";
		cin>>per;
		
	}
	
	void display()
	{
		cout<<"\n Student roll no :"<<rno;
		cout<<"\n student Name    : "<<name;
		cout<<"\n student percentage :"<<per;
	}

};
 int main()
 {
 	
 	student s;
 	s.getdata();
 	s.display();
 	return 0;
 }







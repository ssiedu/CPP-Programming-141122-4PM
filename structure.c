#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float per;
	
	void getdata()
	{
		printf("\n Enter Student Roll no : ");
		scanf("%d",&rno);
		printf("\n Enter Student Name : ");
		scanf("%s",&name);
		printf("\n Enter student percentage : ");
		scanf("%f",&per);
	}
	
	void display()
	{
		printf("\n Student roll no : %d",rno);
		printf("\n student Name    : %s",name);
		printf("\n student percentage : %.2f",per);
	}

}s;
 void main()
 {
 	s.getdata();
 	s.display();
 	getch();
 }







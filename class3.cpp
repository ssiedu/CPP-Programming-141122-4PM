#include<iostream>
using namespace std;
class Item
{
	int code;
	char name[20];
	float price;
	
	public:
		void getdata()
		{
			cout<<"\n Enter item code : ";
			cin>>code;
			cout<<"\n Enter Item Name : ";
			cin>>name;
			cout<<"\n Enter Item price : ";
			cin>>price;
		}
		void display();// function declaration
};

void Item :: display()
{
	cout<<"\n Item Code : "<<code;
	cout<<"\n Item Name : "<<name;
	cout<<"\n Item Price : "<<price;
}

int main()
{
	Item I;
	I.getdata();
	I.display();
	return 0;
}



















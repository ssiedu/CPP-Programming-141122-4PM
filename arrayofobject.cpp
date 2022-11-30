#include<iostream>
using namespace std;
class Item
{
	int code;
	char name[10];
	float price;
	public:
		void getdata();
		void display();
};
void Item :: getdata()
{
	cout<<"\n Enter Item Code : ";
	cin>>code;
	cout<<"\n Enter Item Name : ";
	cin>>name;
	cout<<"\n Enter Item Price : ";
	cin>>price;
}
void Item :: display()
{
	cout<<"\n Item Code : "<<code;
	cout<<"\n Item Name : "<<name;
	cout<<"\n Item Price : "<<price;
}

int main()
{
	Item I[3];//Item i1,i2,i3
	int i;
	cout<<"\n Enter Item Detail : "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"\n Item "<<i+1<<" : "<<endl;
		I[i].getdata();
	}
	cout<<"\n Item Details are : "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"\n Item "<<i+1<<" : ";
		I[i].display();
	}
	return 0;
}











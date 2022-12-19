#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int item_code;
	char name[20];
	float price;
	ofstream fout("ITEM");
	cout<<"\n Enter Item code : ";
	cin>>item_code;
	fout<<item_code<<endl;
	cout<<"\n Enter Item Name : ";
	cin>>name;
	fout<<name<<endl;
	cout<<"\n Enter Item Price : ";
	cin>>price;
	fout<<price<<endl;
	fout.close();
	
	ifstream fin("ITEM");
	fin>>item_code;
	fin>>name;
	fin>>price;
	
	cout<<"\n Details of Item : \n";
	cout<<"\n Item Code : "<<item_code;
	cout<<"\n Item Name : "<<name;
	cout<<"\n Item Price : "<<price;
	
	fin.close();
	return 0;
}

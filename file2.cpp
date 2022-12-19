#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C Programming");
	fout<<"Array"<<endl;
	fout<<"Pointer"<<endl;
	fout<<"String"<<endl;
	fout<<"Structure"<<endl;
	fout<<"Function"<<endl;
	fout.close();
	
	fout.open("C++ Programming");
	fout<<"Class and Object"<<endl;
	fout<<"Abstraction "<<endl;
	fout<<"Encapsulation"<<endl;
	fout<<"Polymorphism "<<endl;
	fout<<"Inheritance "<<endl;
	fout.close();
	
	ifstream fin;
	fin.open("C Programming");
	char ch[30];
	cout<<"\n Content of C programming file : \n";
	while(fin)
	{
		fin.getline(ch,30);
		cout<<ch<<endl;
	}
	fin.close();
	
	fin.open("C++ Programming");
	cout<<"\n Content of C++ programming file : \n";
	while(fin)
	{
		fin.getline(ch,30);
		cout<<ch<<endl;
	}
	fin.close();
	return 0;
}

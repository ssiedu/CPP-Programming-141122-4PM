#include<iostream>
using namespace std;
class Second;
class First
{
	int v1;
	public:
		void getdata(int a)
		{
			v1=a;
		}
		void display()
		{
			cout<<"\n value 1 is : "<<v1;
		}
		friend void exchange(First &f, Second &s);
};
class Second
{
	int v2;
	public:
		void getdata(int b)
		{
			v2=b;
		}
		void display()
		{
			cout<<"\n value 2 : "<<v2;
		}
		friend void exchange(First &f,Second &s);
};

void exchange(First &f,Second &s)
{
	int temp=f.v1;
	f.v1=s.v2;
	s.v2=temp;
}
int main()
{
	First obj1;
	Second obj2;
	obj1.getdata(100);
	obj2.getdata(200);
	cout<<"\n Before Exchange : \n";
	obj1.display();
	obj2.display();
	exchange(obj1,obj2);
	cout<<"\n After Exchange : \n";
	obj1.display();
	obj2.display();
	return 0;
	
}


















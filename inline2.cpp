#include<iostream>
using namespace std;
class Max_num
{
	int x,y;
	public:
		void getdata();
		void display();
		void max();
};
void Max_num :: getdata()
{
	cout<<"\n Enter The value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
}
void Max_num::display() 
{
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
}
inline void Max_num :: max()
{
	cout<<"\n Largest value : "<<((x>y)?x:y);
}
int main()
{
	Max_num m;
	m.getdata();
	m.display();
	m.max();
	return 0;
}






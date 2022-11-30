#include<iostream>
using namespace std;
class Largest
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\n Enter First Number : ";
			cin>>x;
			cout<<"\n Enter Second Number : ";
			cin>>y;
		}
		void display();
		int max();
		
};
void Largest :: display()
{
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
	cout<<"\n Largest value : "<<max();
}
int Largest :: max()
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	Largest L;
	L.getdata();
	L.display();
	//cout<<"\n Maximum Value : "<<L.max();
	return 0;
}





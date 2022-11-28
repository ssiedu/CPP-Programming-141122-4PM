#include<iostream>
using namespace std;
class Addition
{
	int fnum,snum,sum;
	public:
		void getData()
		{
			cout<<"\n Enter First Number : ";
			cin>>fnum;
			cout<<"\n Enter Second Number : ";
			cin>>snum;
		}
		void getSum()
		{	
			sum=fnum+snum;
		}
		void display()
		{
			cout<<"\n Sum of two Numbers : "<<sum;
		}
}a1;//global
 int main()
 {
 	Addition a;//local
 	a.getData();
 	a.getSum();
 	a.display();
 	a1.getData();
 	a1.getSum();
 	a1.display();
 	return 0;
 }








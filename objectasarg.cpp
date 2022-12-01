#include<iostream>
using namespace std;
class Time
{
	int hours,minutes;
	public:
		void gettime(int h,int m)
		{
			hours = h;
			minutes = m;
		}
		void showTime()
		{
			cout<<hours<<" hour  : "<<minutes<<" minute ";
		}
		void sum(Time T1,Time T2);
};
void Time :: sum(Time T1,Time T2)
{
	minutes= T1.minutes + T2.minutes;
	hours = minutes/60;
	minutes = minutes%60;
	hours = hours + T1.hours+ T2.hours;
}

int main()
{
	Time T1,T2,T3;
	T1.gettime(2,30);
	T2.gettime(3,45);
	T3.sum(T1,T2);
	cout<<"\n T1 Time : ";
	T1.showTime();
	cout<<"\n T2 Time : ";
	T2.showTime();
	cout<<"\n T3 Time : ";
	T3.showTime();
	return 0;
}










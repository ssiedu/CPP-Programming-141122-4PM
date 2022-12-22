#include<iostream>
using namespace std;
template<class T>
class Number
{
	T num;
	public:
		Number( T n)
		{
			num=n;
		}
		T getNum();
		
};
template<class T>
T Number<T> :: getNum()
{
	return num*num;
}

int main()
{
	Number <int>n1(7);
	Number <double>n2(2.2);
	
	cout<<"\n Integer Number : "<<n1.getNum();
	cout<<"\n double Number : "<<n2.getNum();
	
	return 0;
	
	
}

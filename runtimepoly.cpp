#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void sum()
		{
			cout<<"\n Enter the value of a : ";
			cin>>a;
			cout<<"\n Enter the value of b : ";
			cin>>b;
			cout<<"\n sum of two numbers : "<<a+b;
		}
};
class B : public A
{
	int a,b;
	public: 
	    void sum()
	    {
	    	cout<<"\n Enter the value of a : ";
	    	cin>>a;
	    	cout<<"\n Enter the value of b : ";
	    	cin>>b;
	    	cout<<"\n sub of two numbers : "<<a-b;
		}
};
int main()
{ 
	 B ob;
	 A *p = &ob;
	 p->sum();
	 return 0;
}

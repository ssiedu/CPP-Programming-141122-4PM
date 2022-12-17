#include<iostream>
#include<exception>
using namespace std;
class Myexception : public exception
{
	public:
		const char * what() const throw()
		{
			return " Attempted to divide by zero Error \n";
		}
};
int main()
{
	try
	{
		int a,b;
		cout<<"\n Enter the value of a : ";
		cin>>a;
		cout<<"\n Enter the value of b : ";
		cin>>b;
		if(b==0)
		{
			Myexception z;
			throw z;
		}
		else
		cout<<"\n value of a/b : "<<a/b;
	}
	catch(exception &ex)
	{
		cout<<ex.what();
	}
	return 0;
}

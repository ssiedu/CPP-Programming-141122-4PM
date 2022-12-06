#include<iostream>
using namespace std;
int count =0;
class Alpha
{
	public:
		Alpha()
		{
			count++;
			cout<<"\n Number of object created : "<<count;
		}
		~Alpha()
		{
			cout<<"\n Number of object destroyed : "<<count;
			count--;
		}		
};
int main()
{
	cout<<"\n In main Function : \n";
	Alpha a1,a2,a3,a4;
	{
		cout<<"\n In block1 : \n";
		Alpha a5;
	}
	{
		cout<<"\n In block2 : \n";
		Alpha a6;
	}
	cout<<"\n Re-Enter in main Function : ";
	return 0;
}


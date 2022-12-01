#include<iostream>
using namespace std;
class item
{
	int no;
	static int count;
	public:
		void getvalue(int a)
		{
		  no=a;
		  count++;	
		}
		void getcount()
		{
			cout<<"\n number of count : "<<count;
		}
};
 int item :: count;
 
 int main()
 {
 	item i1,i2,i3;
 	i1.getcount();
 	i2.getcount();
 	i3.getcount();
 	i1.getvalue(100);
 	i1.getcount();
 	i2.getvalue(200);
 	i2.getcount();
 	i3.getvalue(300);
 	i3.getcount();
 	return 0;
 }





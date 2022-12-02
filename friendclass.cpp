#include<iostream>
using namespace std;
class ABC;
class XYZ
{
	int x;
	public:
		void getdata(int a)
		{
			x=a;
		}
		friend void max(XYZ,ABC);
};
class ABC
{
	int y;
	public:
		void getdata(int b)
		{
			y=b;
		}
		friend void max(XYZ,ABC);
};
void max(XYZ m, ABC n)
{
	if(m.x>n.y)
		cout<<"largest value : "<<m.x;
	else
		cout<<"\n largest value : "<<n.y;
}
int main()
{
	XYZ xyz;
	ABC abc;
	xyz.getdata(50);
	abc.getdata(20);
	max(xyz,abc);
	return 0;
	
	
	
	
}













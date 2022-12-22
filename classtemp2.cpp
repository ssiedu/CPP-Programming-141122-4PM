#include<iostream>
using namespace std;
template<class T , class U,class V=char>
class ABC
{
	T var1;
	U var2;
	V var3;
	public:
		ABC(T v1, U v2 , V v3)
		{
			var1 = v1;
			var2 =v2;
			var3 = v3;
		}
		void display()
		{
			cout<<" var 1 : "<<var1<<endl;
			cout<<" var 2 : "<<var2<<endl;
			cout<<" var 3 : "<<var3<<endl;
		}
};

int main()
{
	ABC <int,double> a(7,7.7,'c');
	cout<<"object1 value : "<<endl;
	a.display();
	
	ABC <double,char,bool> b(8.8,'a',false);
	cout<<"\n object2 value : "<<endl;
	b.display();
	return 0;
}






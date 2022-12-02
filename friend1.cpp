#include<iostream>
using namespace std;
class Sample
{
	float a,b;
	public:
		void getdata()
		{
			cout<<"\n Enter the value of a : ";
			cin>>a;
			cout<<"\n Enter the value of b : ";
			cin>>b;
		}
		friend float mean(Sample);
};
float mean(Sample s)
{
	return (s.a+s.b)/2;
}
int main()
{
	Sample obj;
	obj.getdata();
	cout<<"\n mean value : "<<mean(obj);
	return 0;
}

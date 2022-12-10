#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual float calculate_area()=0;
};
class Circle : public Shape
{
	float r;
	public:
		Circle(float a)
		{
			r=a;
		}
		float calculate_area()
		{
			return 3.14*r*r;
		}
};
class Rect : public Shape
{
	float l,b;
	public:
		Rect(float x, float y)
		{
			l=x;
			b=y;
		}
		float calculate_area()
		{
			return l*b;
		}
};
class Square : public Shape
{
	float a;
	public:
		Square(float x)
		{
			a=x;
		}
		float calculate_area()
		{
			return a*a;
		}
};
int main()
{
	Shape *ptr;
	Circle c(2.2);
	Rect r(2.1,3);
	Square s(2);

	ptr=&c;
	float area1=ptr->calculate_area();
	cout<<"Area of circle : "<<area1<<endl;
	
	ptr=&r;
	float area2=ptr->calculate_area();
	cout<<"Area of Rectangle : "<<area2<<endl;
	
	ptr=&s;
	float area3=ptr->calculate_area();
	cout<<"Area of square : "<<area3<<endl;
	
	return 0;
}










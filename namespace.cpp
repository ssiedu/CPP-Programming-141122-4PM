#include<iostream>
using namespace std;
namespace First
{
		void hello()
		{
			cout<<"First class Namespace";
		}
}
namespace Second
{
	void hiii()
	{
		cout<<"\n Second Class namespace";
	}
}
using namespace First;
using namespace Second;
int main()
{
	/*First :: hello();
	Second :: hello();*/
	hello();
	hiii();
	return 0;
}

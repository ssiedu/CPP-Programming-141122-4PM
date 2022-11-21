#include<iostream>
using namespace std;
int main()
{
	int res =(10>5 && 12<3) ? (10>5 || 10<5)?10:5 : !(12>6)?12 : 6;
	cout<<res;
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20];
	cout<<"\n Enter String : ";
	gets(str1);
	cout<<"\n String is : "<<str1;
	
	int len = strlen(str1);
	cout<<"\n String length : "<<len;
	cout<<"\n String Upper Case : "<<strupr(str1);
	cout<<"\n String lower case : "<<strlwr(str1);
	
	return 0;
}


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20];
	char str2[20];
	char str3[20];
	
	cout<<"\n Enter First String :";
	gets(str1);
	cout<<"\n Enter Second String : ";
	gets(str2);
	
	if(strcmp(str1,str2)==0)
		cout<<" Strings are equal ";
	else
		cout<<"\n Strings are not equal ";
	
	strcpy(str3,str1);
	cout<<"\n string copy : "<<str3;
	
	strcat(str1,str2);
	cout<<"\n string concatination : "<<str1;	
	return 0;
	
}

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char str[20];
	int len,i;
	fstream file;
	file.open("Text.txt",ios::in|ios::out|ios::app);
	cout<<"\n Enter any string : ";
	cin>>str;
	len=strlen(str);
	for(i=0;i<=len;i++)
	file.put(str[i]);
	file.seekg(0);
	char ch;
	while(file)
	{
		file.get(ch);
		cout<<ch;
	}
	file.close();
	return 0;
}

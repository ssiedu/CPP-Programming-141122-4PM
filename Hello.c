#include"stdio.h" //Preprocessor Directive   include-keyword(32 Reserved Keyword)
                  //Standard Input Output Header File- printf(),scanf()
#include<conio.h> //Console Input Output Header File- clrscr(),getch(),getche().getchar()
int main()  
{
	int a,b; //Variable Declaration
	//a=10;  //Varaible Initialization
	//int b=20; // Declaration & Initialization
	int sum=0;  // sum=-57648
	printf("Please enter the value of a");
	scanf("%d",&a);
	printf("Please enter the value of b");
	scanf("%d",&b);
	sum=a+b;
	printf("Sum=%d",sum);
    return 0;
}


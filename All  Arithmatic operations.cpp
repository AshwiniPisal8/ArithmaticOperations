//write a program to add,sub,multiply,divide two  number
#include<stdio.h>
#include<conio.h>

int  main()
{
	int a,b,sum,sub,Div,Mul;
	
	printf("\n Enter first No--->");
	scanf("%d"  , &a);
    printf("\n Enter Second No--->");
	scanf("%d"  , &b);
	
	sum=a+b;
	
	printf("\n Addition of two given numbers===.>%d" ,sum);
	
	printf("\n Enter first No--->");
	scanf("%d"  , &a);
    printf("\n Enter Second No--->")
	scanf("%d"  , &b);
	
	sub=a-b;
	
	printf("\n Subtraction of two given numbers===.>%d" ,sub);
	
	
	printf("\n Enter first No--->");
	scanf("%d"  , &a);
    printf("\n Enter Second No--->");
	scanf("%d"  , &b);
	
	Div=a/b;
	
	printf("\n Division of two given numbers===.>%d" ,Div);
	
	printf("\n Enter first No--->");
	scanf("%d"  , &a);
    printf("\n Enter Second No--->");
	scanf("%d"  , &b);
	
	Mul=a*b;
	
	printf("\n Multiplication of two given numbers===.>%d" , Mul);
	
	getch();
}
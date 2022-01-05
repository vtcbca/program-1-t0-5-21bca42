/*write a program to enter any number and print it is reverse
date:22-12-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,rev=0,remaindar;
	clrscr();
	printf("\n enter value");
	scanf("%d",&a);
	while(a!=0)
	{
		remaindar=a%10;
		rev=rev*10+remaindar;
		a/=10;
	}
	printf("\n reversed number=%d",rev);
	getch();
}
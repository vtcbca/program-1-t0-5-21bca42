/*write a program to enter any number and print sum of its digit
date:24-12-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,sum=0;
	clrscr();
	printf("\n enter value");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;

	}
		printf("\n sum is=%d",sum);
	getch();
}
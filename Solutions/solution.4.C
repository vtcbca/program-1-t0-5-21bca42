#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,r,reverse=0;
	clrscr();
	printf("\nplease enter any number to check for pelindrome\n");
	scanf("%d",&a);

	for(b=a;b>0;b=b/10)
	{
	 r=b%10;
	 reverse=reverse*10+r;
	}

	printf("reverse of entered number is = %d\n",reverse);

	if(a==reverse)
	{
		printf("\n%d is palindrome number.\n",a);
	}
	else
	{
		printf("%d is not palindrome number.\n",a);
	}
	getch();

}



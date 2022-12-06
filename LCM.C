#include<stdio.h>
#include<conio.h>
void main()
{
int num1=20,num2=24,n,i,lcm,hcf;
clrscr();
	
	for(i=1;i<num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf = i;
		}
	}
	lcm=(num1 *num2) /hcf;
	printf("%d",lcm);

getch();
}

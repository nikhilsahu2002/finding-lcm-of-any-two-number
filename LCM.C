#include<stdio.h>
#include<conio.h>
void main()
{
int num1=20,num2=24,n,i,lcm,hcf;
clrscr();
	n=(num1<num2) ? num1: num2;

	for(i=1;i<n;i++)
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

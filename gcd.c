//Program to find gcd of two numbers
#include<stdio.h>
int main()
{
	int d1,d2,d3,rem,x;
	printf("Enter two numbers:");
	scanf("%d%d",&d1,&d2);
	if(d1<d2)
	{
		do
		{
			rem=d2%d1;
			x=d1;
			d2=d1;
			d1=rem;
		}while(rem!=0);
		printf("\n GCD:%d",x);
	}
	else
	{
		do
		{
			rem=d1%d2;
			x=d2;
			d1=d2;
			d2=rem;
		}while(rem!=0);
		printf("\n GCD:%d",x);
	}
	return 0;
}

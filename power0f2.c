//Program to find whether a number is a power of 2 or not
#include<stdio.h>
int main()
{
	int flag=1,i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0&&n!=1)
	{
		if(n%2!=0)
		{
			flag=0;
			break;
		}
		n/=2;
	}
	if(flag)
	printf("It is a power of 2");
	else
	printf("Its not power of 2");
}

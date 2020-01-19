//Program to print a pattern like the following:
//Range=4
//A
//AB
//ABC
//ABCD
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%c",j+64);
		printf("\n");
	}
}

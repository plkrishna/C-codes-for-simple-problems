//Program to print patterns like the following one:
//Series: 1 2 3 4 5 4 3 2 1
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter range:");
	scanf("%d",&n);
	j=n-1;
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=n)
		printf("%d",i);
		if(i>n)
		printf("%d",j--);
	}
	return 0;
}

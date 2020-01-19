#include<stdio.h>
int main()
{
	int k,i,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		k=i<=n?i:n-(i%n);
		printf("%4d",k);
	}
	return 0;
}

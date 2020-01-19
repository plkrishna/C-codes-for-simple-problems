#include<stdio.h>
int main()
{
	int k,i,j,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		k=i<=n?i:n-(i%n);
		for(j=1;j<=(n-k);j++)
		printf(" ");
		for(j=1;j<=k;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}

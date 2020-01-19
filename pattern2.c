#include<stdio.h>
int main()
{
	int i,j,k=4,n=4,matrix[7][7]={0};
	for(i=0;i<2*n-1;i++)
	{
		for(j=i;j<=2*n-1-2*j;j++)
		{
			matrix[i][j]=k;
			matrix[j][i]=k;
			matrix[2*n-i-1][j]=k;
			matrix[j][2*n-i-1]=k;
		}
		k--;
	}
	for(i=0;i<7;i++)
	{
	for(j=0;j<7;j++)
	{
		printf("%d ",matrix[i][j]);
	}
	printf("\n");
}
return 0;
}

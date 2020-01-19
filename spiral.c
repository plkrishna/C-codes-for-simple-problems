//Program for spiral traversal of a two dimensional array or matrix
#include<stdio.h>
#define size 5
int main()
{
	int a[10][10];
	int i,j,k=1;
	int r_upper,c_upper,r_lower,c_lower,count;
	for(i=0;i<size;i++)
	for(j=0;j<size;j++)
	a[i][j]=k++;
	printf("Array:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	r_upper=size;
	c_upper=size;
	r_lower=0;
	c_lower=0;
	count=0;
	i=0;
	j=0;
	for(i=r_lower;i<)
	return 0;
}

#include<stdio.h>
#define size 6
int main()
{
	int i,j,c_lower,c_upper,r_lower,r_upper,h,a[100][100];
	h=1;
	int count=0;
	int visited[size][size]={0};
	for(i=0;i<size;i++)
	for(j=0;j<size;j++)
	a[i][j]=h++;
	printf("Matrix:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	c_lower=0;
	r_lower=0;
	r_upper=size;
	c_upper=size;
	//i=0;
	//j=0;
	printf("Spiral traversal:\n");
	while(1)
	{
		i=r_lower;
		j=c_lower;
		for(;visited[i][j]!=1&&j<c_upper;j++)
		{
			printf("%d\n",a[i][j]);
			visited[i][j]++;
			count++;
		}
		if(count==size*size)
		break;
		j--;
		i++;
		for(;visited[i][j]!=1&&i<r_upper;i++)
		{
			printf("%d\n",a[i][j]);
			visited[i][j]++;
			count++;
		}
		i--;
		j--;
		for(;visited[i][j]!=1&&j>=0;j--)
		{
			printf("%d\n",a[i][j]);
			visited[i][j]++;
			count++;
		}
		j++;
		i--;
		for(;visited[i][j]!=1&&i>=0;i--)
		{
			printf("%d\n",a[i][j]);
			visited[i][j]++;
			count++;
		}
		i++;
		c_lower++;
		r_lower++;
		c_upper--;
		r_upper--;
	}
	return 0;
}

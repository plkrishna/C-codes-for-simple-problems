//Program to find Rank of elements in a matrix
#include<stdio.h>
//int no_element_present(int nep[][])
int main()
{
	int a[100][100],ranker=0,small,small1;
	int rank[100][100],i,j,g,h;
	int m,n,cnt=0;
	printf("Order of matrix:");
	scanf("%d%d",&m,&n);
	printf("Matrix:");
	int large=0;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	small=100000;
	small1=100000;	
	while(cnt<m*n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]<=small&&a[i][j]!=0)
				{
					small=a[i][j];
					g=i;
					h=j;
				}
			}
		}
		if(small==small1)
		{
			rank[g][h]=ranker;
			a[g][h]=0;
		}
		else
		{
			rank[g][h]=++ranker;
			a[g][h]=0;
		}
		small1=small;
		small=1000000;
		cnt++;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",rank[i][j]);
		}
		printf("\n");
	}
	return 0; 
}

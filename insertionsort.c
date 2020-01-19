#include<stdio.h>
int main()
{
	int a[6]={2,1,3,1,2};
	int i,j,k,pivot,shift=0;
	for(i=1;i<5;i++)
	{
		pivot=a[i];
		j=i-1;
		while(pivot<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
			shift++;
		}
		a[j+1]=pivot;
	}
	//for(i=0;i<6;i++)
	//printf("%d ",a[i]);
	//printf("%d",shift);
	return 0;
}

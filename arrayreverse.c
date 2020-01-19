//Program to reverse an integer array
#include<stdio.h>
int main()
{
	int a[100],i,size;
	printf("Enter size:");
	scanf("%d",&size);
	printf("Enter elements:");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	int t;
	for(i=0;i<size/2;i++)
	{
		t=a[i];
		a[i]=a[size-i-1];
		a[size-i-1]=t;
	}
	printf("After reversing:\n");
	for(i=0;i<size;i++)
	printf(" %d ",a[i]);
	return 0;
}

//Program to find maximum element in an array using recursion
#include<stdio.h>
int maximum(int a[],int low,int high);
int main()
{
	int a[10]={672,723,931,422,456,65,221,233};
	int high=7,low=0;
	printf("%d",maximum(a,low,high));
	return 0;
}
int maximum(int a[],int low,int high)
{
	int max1,max2;
	if(low==high)
	return a[low];
	else if(low==high-1)
	{
		if(a[low]>a[high])
		return a[low];
		else
		return a[high];
	}
	else
	{
		int mid=(low+high)/2;
		max1=maximum(a,low,mid);
		max2=maximum(a,mid+1,high);
		if(max1>max2)
		return max1;
		else
		return max2;
	}
}

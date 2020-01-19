//Program to find largest contiguous sub array sum
#include<stdio.h>
int main()
{
	int a[10]={-1,2,4,-1,-2,6,7,-5,2,-3};
	int i,sum=0,d_sum=0,end;
	for(i=0;i<10;i++)
	{
		d_sum=d_sum+a[i];
		if(d_sum>sum)
		{
			sum=d_sum;
		}
		if(d_sum<0)
		d_sum=0;
	}
	printf("Largest sum:%d",sum);
	return 0;
}

//Program to find kth smallest element in an array
#include<stdio.h>
int main()
{
	int i,j,t;   //for loops
	int vector[100],sorted[100]; //vector is actual array of elements,sorted[] is the sorted array upto 'k'elements
	int k,size;  //we need to find kth smallest element
	printf("Enter the size and k value:");
	scanf("%d%d",&size,&k);
	printf("Enter the list of values:");
	for(i=0;i<size;i++)
	scanf("%d",&vector[i]);
	for(i=0;i<k;i++)
		sorted[i]=vector[i];  //inserting 'k' elements in sorted list
	for(i=0;i<k-1;i++)        //bubble sort for sorted[] array
	{
		for(j=0;j<k-i-1;j++)
		{
			if(sorted[j]>sorted[j+1])     
			{
				t=sorted[j+1];
				sorted[j+1]=sorted[j];   
				sorted[j]=t;
			}
		}
	}
	//we have a sorted array of 'k' elements now
	for(i=k;i<size;i++)
	{
		if(vector[i]<sorted[k-1])
		{
			t=vector[i];
			sorted[k-1]=t;
			for(j=k-2;j>=0;j--)
			if(t<sorted[j])
			{
				sorted[j+1]=sorted[j];
				sorted[j]=t;
			}
		}
	}
	printf("kth smallest element:%d",sorted[k-1]);
	return 0;
}

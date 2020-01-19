//Program to find subsets of a set
#include<stdio.h>
#include<math.h>
int main()
{
	int set[100]={1,2,3,4,5,6};
	int length=6,size;
	int k=1,i;
	size=(int)pow(2,length);
	while(k<size)
	{
		for(i=0;i<length;i++)
		if((int)pow(2,i)&k)
		printf("%d ",set[i]);
		printf("\n");
		k++;
	}
	return 0;
}

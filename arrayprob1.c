//Program to join two vectors
#include<stdio.h>
int main()
{
	int a[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int steps,start,end,i,j;
	int newarray[25];
	for(i=0;i<25;i++)
	printf("a[%d]: %d\n",i,a[i]);
	printf("Enter start and end index:");
	scanf("%d%d",&start,&end);
	printf("Enter step count:");
	scanf("%d",&steps);
	j=0;  // 'j' for new array
	for(i=start;i<end;i+=steps,j++)  //'i' is used for original array
		newarray[j]=a[i]; //new array is initialized according to the specification
	printf("New array:\n");
	for(i=0;i<j;i++)  // 'j' contains the end index of new array
	printf(" %d ",newarray[i]);
	return 0;
}

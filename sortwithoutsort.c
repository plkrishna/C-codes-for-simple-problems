//Sort an array containing 0s,1s and 2s without using any sorting technic
#include<stdio.h>
int main()
{
	int a[100]={0,2,1,0,1,0,1,1,1,0,1,2,2,0,0,1,0,2,0};
	int size=19,i,freq[3]={0};
	for(i=0;i<19;i++)
	freq[a[i]]++;
	for(i=0;i<19;i++)
	{
		if(i<freq[0])
		a[i]=0;
		else if(i<freq[0]+freq[1]&&i>=freq[0])
		a[i]=1;
		else
		a[i]=2;
	}
	printf("Sorted list:\n");
	for(i=0;i<19;i++)
	printf("%d ",a[i]);
	return 0;
}

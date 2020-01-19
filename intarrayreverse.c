#include<stdio.h>
void reverseint(int *,int,int *p);
int main()
{
	int a[]={1,2,3,4,5,6,8};
	int *p=a;
	reverseint(a,8,p);
	return;
}
void reverseint(int *a,int n,int *p)
{
	if(a==p+n-1)
	return;
	else
	{
		reverseint(a+1,n,p);
		printf("%d",*a);
		return;
	}
}

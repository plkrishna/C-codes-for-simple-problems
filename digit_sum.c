//Program to find the sum of digits upto a single digit
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n/10>=1)
	n=n/10+n%10;
	printf("%d",n);
	return 0;
}

//Program to print binary representation of a number using recursion
#include<stdio.h>
void binary(int n);
int main()
{
	int n=122;
	binary(n);
}
void binary(int n)
{
	if(n==0)
	printf("0");
	else
	binary(n/2);
	printf("%d",n%2);
		return;
}

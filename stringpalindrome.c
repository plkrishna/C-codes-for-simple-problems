//Program to find whether a string is palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%s",&str);
	int len,i;
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<=len/2;i++)
	{
		if(str[i]!=str[len-1-i])
		{
			printf("Not palindrome");
			exit(0);
		}
	}
	printf("Palindrome");
	return 0;
}

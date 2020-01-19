//Program to find reverse of string using recursion
#include<stdio.h>
void reverse(char *);
int main()
{
	char a[]="This is";
	reverse(a);
	return 0;
}
void reverse(char *s)
{
	if(*s=='\0')
	return;
	else
	{
		printf("%c",*s);
		reverse(s+1);
		return;
	}
}

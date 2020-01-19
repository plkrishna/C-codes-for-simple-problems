#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	if((c>=65&&c<=90)||(c>=97&&c<=122))
	printf("Alphabet");
	else if(c>=48&&c<=57)
	printf("Digit");
	else
	printf("Symbol");
	return 0;
}

#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter a string:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>=97&&str[i]<=122)||(str[i]>=65&&str[i]<=90)||!(str[i]>=48&&str[i]<=57))
		{
			printf("No");
			exit(0);
		}
	}
	printf("Yes");
	return 0;
}

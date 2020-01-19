//Program to find whether a string all alphabets
#include<stdio.h>
int main()
{
	char str[100];
	int i,count=0,j;
	printf("Enter string:");
	scanf("%[a-z \n]",str);
	char c=97;
	for(i=0;i<26;i++)
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]==(c+i))
		{
			count++;
			break;
		}
	}
	if(count==26)
	printf("True");
	else
	printf("False");
	return 0;
}

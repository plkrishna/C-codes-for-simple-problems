//Program to print number of characters in each word in a sentence
#include<stdio.h>
int main()
{
	int words[10]={0},i,j=0;
	char line[100];
	printf("Enter a line of text:\n");
	scanf("%[a-z A-Z]",line);
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]==' ')
		{
			j++;
			continue;
		}
		words[j]++;
		if(line[i+1]=='\0')
		j++;
	}
	printf("Number of characters in each word:\n");
	for(i=0;i<j;i++)
	printf("Word[%d]: %d letters\n",i+1,words[i]);
	return 0;
}

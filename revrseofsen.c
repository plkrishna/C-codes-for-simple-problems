//Program to find Reverse of words in a sentence
#include<stdio.h>
#include<string.h>
int main()
{
	char sen[100],t;
	scanf("%[a-z A-Z]",sen);
	int i,j,k,count;
	count=strlen(sen);
	for(i=0;i<count;)
	{
		for(j=i;sen[j+1]!=' '&&sen[j+1]!='\0';j++);
		k=i;
		while(k<=i+(j-i)/2)
		{
			t=sen[k];
			sen[k]=sen[j-(k-i)];
			sen[j-(k-i)]=t;
			k++;
		}
		i=j+2;
	}
	printf("%s",sen);
}

//Program to find number of characters,lines and words in a paragraph
//This program also prints the paragraph by shifting each character by specified number
//Example:If No. of shifts=3, then 'A' transforms to 'D'
#include<stdio.h>
int main()
{
	char paragraph[100];
	int i=0;
	char c;
	while(1)
	{
		c=getchar();
		if(c=='1')
		break;
		paragraph[i++]=c;
	}
	paragraph[i]='\0';
	int characters=0,words,lines,j,k,count[26]={0},shift;
	char d=97,h;  //for printing at the end
	lines=1; 
	words=0;
	for(i=0;paragraph[i]!=0;i++)
	{
		if(paragraph[i]=='\n'&&paragraph[i+1]!='\0')
		lines++;
		if(paragraph[i]>=97&&paragraph[i]<=122)  //alphabets lie between 97 & 122 in ASCII
		{
		characters++;
		count[paragraph[i]-97]++;  //The counter of corresponding alphabet is incremented
	    }
		if((paragraph[i]==' '&&paragraph[i+1]!=' '&&paragraph[i+1]!='\n')||(paragraph[i+1]=='\n'&&paragraph[i+2]!='\0')||paragraph[i+1]=='\0')
		words++;
	}
	printf("\nCharacters:%d\nWords:%d\nLines:%d\n",characters,words,lines);
	printf("Frequency:\n");
	for(i=0;i<26;i++)
		printf("%c:%d\n",d+i,count[i]);
	printf("Enter number of shifts:");
	scanf("%d",&shift);
	for(i=0;paragraph[i]!='\0';i++)
	{
		if(paragraph[i]>=97&&paragraph[i]<=122)
		{
			h=paragraph[i]+shift;
			if(h>122)
			h-=26;
			paragraph[i]=h;
		}
	}
	for(i=0;paragraph[i]!='\0';i++)
	printf("%c",paragraph[i]);
	return 0;
}

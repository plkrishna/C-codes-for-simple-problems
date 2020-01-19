#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],substr[100][100],s2[100],matched[100][100];
	int i,j,k,count=0;
	int c=0,d=0,len_s2;
	printf("Enter a string s1:");
	scanf("%s",s1);
	printf("Enter a string s2:");
	scanf("%s",s2);
	len_s2=strlen(s2);
	k=0;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=i;s1[j]!='\0';j++)
		{
			for(k=i;k<=j;k++)
			if(j-i+1>=len_s2)
				substr[c][d++]=s1[k];
			if(d!=0){
			substr[c++][d]='\0';
			d=0;
			count++;
			}
		}
	}	
	printf("Number of substrings:%d\n",count);
	for(i=0;i<count;i++)
	printf("%s\n",substr[i]);
	return 0;
}

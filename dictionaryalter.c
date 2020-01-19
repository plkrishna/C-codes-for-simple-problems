//Program to arrange a string according to a specified dictionary order
#include<stdio.h>
#include<string.h>
void dup_remove(char *dr);
int main()
{
	char p[27],s[100],t;
	int priority[26];
	int i,j,k,h,count=0;
	scanf("%[a-z]",p);
	scanf("\n%[a-z]",s);
	for(i=0;p[i]!='\0';i++)
	{
		j=p[i]-97;
		priority[j]=i;
	}
	dup_remove(s);
	count=strlen(s);
	for(i=0;i<count;i++)
	{
		for(j=0;j<count-i-1;j++)
		{
			k=s[j]-97;
			h=s[j+1]-97;
			if(priority[k]>priority[h])
			{
				t=s[j+1];
				s[j+1]=s[j];
				s[j]=t;
			}
		}
	}
	printf("%s",s);
	return 0;
}
void dup_remove(char *dr)
{
	int i,j;
	int visited[26]={0};
	for(i=0;dr[i]!='\0';i++)
	{
		if(visited[dr[i]-97]==0)
		visited[dr[i]-97]=1;
		else
		{
			for(j=i;dr[j]!='\0';j++)
			dr[j]=dr[j+1];
		}
	}
}

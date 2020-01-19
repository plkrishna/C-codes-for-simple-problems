#include<stdio.h>
#include<string.h>
void reverse(char *str,int start,int end);
int main()
{
	char st[100]="WONS NOJ";
	int len=strlen(st);
	reverse(st,0,--len);
	printf("Reversed string:%s",st);
	return 0;
}
void reverse(char *str,int start,int end)
{
	char t;
	t=str[start];
	str[start]=str[end];
	str[end]=t;
	if(start==end||start==end-1)
	return;
	else
	reverse(str,start+1,end-1);	
}

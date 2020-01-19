//Program to check whether a string contains balanced number of parentheses
#include<stdio.h>
int main()
{
	char str[100];
	int i,cnt=0,longer,longest=0;
	printf("Enter a string of only parenthesis:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		cnt++;
		else if(str[i]==')')
		cnt--;
		if(str[i]=='('&&str[i-1]=='(')
		longer++;
		if(str[i]==')'&&str[i-1]=='(')
		{
			if(longer>longest)
			longest=longer;
			longer=1;
		}
	}
	if(cnt==0)
	printf("Balanced\n");
	else
	printf("Unbalanced\n");
	printf("Longest branching:%d",longest);
	return 0;
}

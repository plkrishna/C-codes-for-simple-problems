#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1;
	fp1=fopen("Sample.txt","w+");
	//fp2=fopen("Wildlife2.wmv","wb+");
	if(fp1==NULL)
	{
		printf("Unsuccessful");
		exit(0);
	}
	char ch[100];
	printf("Enter desired text:\n");
	while(strlen(gets(ch))!=0)
	{
		fputs(ch,fp1);
		fputc('\n',fp1);
	}
	fclose(fp1);
	//fclose(fp2);
	return 0;
}

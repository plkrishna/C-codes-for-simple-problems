#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	fp1=fopen("Sample1.txt","r+");
	char name[20];
	int age,i;
	//fp2=fopen("Wildlife2.wmv","wb+");
	if(fp1==NULL)
	{
		printf("Unsuccessful");
		exit(0);
	}
	while((fscanf(fp1,"%d-%[a-zA-Z]@%d\n",&i,name,&age))!=EOF)
	{
		printf("%d\t%s\t\t%d\n",i,name,age);
	}
	fclose(fp1);
	return 0;
}

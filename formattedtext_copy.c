#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1;
	fp1=fopen("Sample1.txt","w+");
	char name[20];
	int age,i;
	//fp2=fopen("Wildlife2.wmv","wb+");
	if(fp1==NULL)
	{
		printf("Unsuccessful");
		exit(0);
	}
	for(i=1;i<4;i++){
	printf("Enter name and age:\n");
	scanf("\n%[a-zA-Z]%d",name,&age);
	fprintf(fp1,"%d-%s@%d\n",i,name,age);
    }
	fclose(fp1);
	//fclose(fp2);
	return 0;
}

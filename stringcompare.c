#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str1[100],str2[100];
	int i,j,k,flag=1;
	printf("Enter first string:");
	scanf("%[a-zA-Z]",str1);
	printf("Enter second string:");
	scanf("\n%[a-zA-Z]",str2);
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++);
	if(i!=j)
	{
		printf("Not equal");
		exit(0);
	}
	else
	{
		for(i=0;str1[i]!='\0';i++)
		if(str1[i]!=str2[i])
		{
			printf("not equal");
			exit(0);
	    }  
	}
	printf("Equal");
	/*if(flag==1)
	printf("Equal");
	else
	printf("Not equal");*/
	return 0;
}

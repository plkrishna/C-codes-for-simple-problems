//Program to check whether a string contains all lowercase alphabets or not
//Prints 'true' if it contains all the alphabets else prints 'false'
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int count[26]={0};
	int i;
	printf("Enter a string:");
	scanf("%[a-z]",str);
	for(i=0;str[i]!='\0';i++)
		count[str[i]-97]++;  // incrementing the corresponding counter of every letter
	for(i=0;i<26;i++)        // for example when 'a' is encountered count[0] is incremented
	if(count[i]==0)
	{
		printf("False");   // If any alphabet is not present its counter is zero
		exit(1);           // Even if one alphabet is not there then print false
	}
	printf("True"); 
	return 0;
}

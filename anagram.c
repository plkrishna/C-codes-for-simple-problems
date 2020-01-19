//Program to check whether two strings are anagram or not
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str1[100],str2[100];
	int count1[26]={0},count2[26]={0},matched[26];
	int no1=0,no2=0; //no1 is number of alphabets in string1 and n2 is no. of alphabets in string2
	printf("Enter two strings:");
	scanf("%[^\n]",str2);
	scanf("\n%[^\n]",str1);
	int i,j=0,k;
	for(i=0;str1[i]!='\0';i++,no1++)
	{
		k=str1[i]-97;      
		matched[j++]=k;   // all the alphabets encountered are stored in a seperate array in the form of integers
		count1[k]++;      //frequency of all letters counted
	}
	for(i=0;str2[i]!='\0';i++,no2++)
		count2[str2[i]-97]++;  // frequency of all alphabets is counted
	if(no1!=no2)  //if no. of alphabets is not same in both strings it's not an anagram
	{
		printf("\nFalse");
		exit(0);
	}
	else
	{
	    for(i=0;i<j;i++)
		if(count1[matched[i]]!=count2[matched[i]])
		{
			printf("\n False"); //if the frequency of any letter is not same in both strings its not an anagram
			exit(0);
		}
		printf("True");
	}
	return 0;
}

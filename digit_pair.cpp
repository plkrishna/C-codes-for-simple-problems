//Program to solve the digit pair problem
#include<stdio.h>
int extract_largest(int x);  // for extracting the largest digit from the number
int extract_smallest(int x); //for extracting the smallest digit from the number
int match(int a,int b); // Matches the indices,if both are even or both are odd returns 1 else returns 0
int main()
{
	int a[100],n;
	int bit_score[100],i,j,k;
	scanf("%d",&n);
	int visited[10]={0},pairs=0,large,small;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		large=extract_largest(a[i]);
		small=extract_smallest(a[i]);    //bitscore=largest*11+smallest*7(ignore MSB if it is 3-digit)
		bit_score[i]=(large*11+small*7)%100;  //calculating bit score for each number
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(match(i,j)&&(visited[bit_score[i]/10]<2)&&(bit_score[i]/10==bit_score[j]/10)) //checks all conditions for pairing
			{
				pairs++;
				visited[bit_score[i]/10]++; //atmost two pairs are allowed for a significant bit
			}
		}
	}
	printf("\n%d",pairs); //printing number of pairs
	return 0;
}
int extract_largest(int x)
{
	int a,b,c;
	a=x/100;
	c=x%10;
	x=x/10;
	b=x%10;
	if(a>b&&a>c)
	return a;
	else if(b>c)
	return b;
	else
	return c;
}
int extract_smallest(int x)
{
	int a,b,c;
	a=x/100;
	c=x%10;
	x=x%100;
	b=x/10;
	if(a<b&&a<c)
	return a;
	else if(b<c)
	return b;
	else
	return c;
}
int match(int a,int b)
{
	if(a%2==0&&b%2==0)
	return 1;
	else if(a%2!=0&&b%2!=0)
	return 1;
	else
	return 0;
}

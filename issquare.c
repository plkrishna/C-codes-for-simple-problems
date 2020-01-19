#include<stdio.h>
int issquare(int f);
int main()
{
	int k;
	k=issquare(36);
	printf("%d",k);
}
int issquare(int f)
{
	int i=1;
	while(1)
	{
		f-=i;
		i+=2;
		if(f==0)
		return 1;
	}
	return 0;
}

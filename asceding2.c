//Program to check whether all digits in a number in ascending order or not
#include<stdio.h>
#include<math.h>
int main()
{
	int j,n,d,h,flag=1;
	printf("Enter a number:");
	scanf("%d",&n);
	d=floor(log10(n));
	while(d>0)
	{
		j=n/(int)(pow(10,d));
		n=n%(int)(pow(10,d));
		h=n/(int)(pow(10,d-1));
		if(j>h)
		{
			flag=0;
			break;
		}
		d--;
	}
	if(flag)
	printf("Ascending");
	else
	printf("not ascending");
	return 0;
}

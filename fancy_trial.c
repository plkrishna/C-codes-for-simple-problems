#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,j,k,n,a,b=0;
	printf("Enter the number:");
	scanf("%d",&n);
	a=floor(log10(n));
	int t=a;
	while(a>0)
	{
		j=n/(int)(pow(10,a));
		n=n%(int)(pow(10,a--));
		k=n/(int)(pow(10,a));
		if(j==k)
		{
			i++;
			continue;
	    }
	    if(j+1==k)
	    {
	    	b++;
	    	continue;
		}
	}
	if(i==t||b==t)
	printf("Fancy");
	else
	printf("Not fancy");
}


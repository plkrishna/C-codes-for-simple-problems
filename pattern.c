#include<stdio.h>
int main()
{
	int n,x,y;
	scanf("%d",&n);
    for(x=0;x<n;x++)
    {
       for(y=0;y<=x;y++)
       {
       printf("%c",64+n-x);
       }
	printf("\n");
   }
   return 0;
}

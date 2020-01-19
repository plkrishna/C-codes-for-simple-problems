#include<stdio.h>
#include<stdarg.h>
int sum(int count, ...);
int main()
{
	int c=4;
	//sum
	printf("Sum:%d",sum(c,1,2,3,4));
	return 0;
}
int sum(int count, ...)
{
	va_list v;
	va_start(v, count);
	int i,b;
	int minimum=va_arg(v, int);
for(i=1;i<count;i++)
if((b=va_arg(lis, int))<minimum)
minimum=b;
return min;
}

#include<stdio.h>
#define cns 1000000007
struct frac
{
    int numer;
    int denom;
};
void reduce(int i);
int factorial(int n);
int combination(int n1,int r1);
int gcd(int a,int b);
int mulnv(int k);
struct frac np[100],pp[100];
int main()
{
    int testcases;
    scanf("%d",&testcases);
	int m[100],n[100],t[100],j;
	for(j=0;j<testcases;j++)
    scanf("%d%d%d",&n[j],&t[j],&m[j]);
    for(j=0;j<testcases;j++)
    {
    np[j].numer=combination(n[j]-m[j],t[j]);
    np[j].denom=combination(n[j],t[j]);
    pp[j].numer=np[j].denom-np[j].numer;
    pp[j].denom=np[j].denom;
    reduce(j);
    int ans;
    ans=(pp[j].numer*mulnv(pp[j].denom))%cns;
    printf("\n%d",ans);
    }
    return 0;
}
int factorial(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return(n*factorial(n-1));
}
int combination(int n1,int r1)
{
    int i=1,comb=1;    
    for(i=1;i<=r1;i++)
        comb=comb*n1--;
    return comb/factorial(r1);
}
void reduce(int i)
{
	int a=pp[i].numer,b=pp[i].denom;
	pp[i].numer=pp[i].numer/gcd(a,b);
	pp[i].denom=pp[i].denom/gcd(a,b);
}
int gcd(int a,int b)
{
	int rem,t;
	do
	{
		t=a;
		rem=b%a;
		b=a;
		a=rem;
	}while(rem!=0);
	return t;
}
int mulnv(int k)
{
		int i=1;
	while(1)
	{
		if((cns*i+1)%k==0)
		break;
		i++;
	}
	return (cns*i+1)/k;
}

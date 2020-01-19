#include<stdio.h>
#include<string.h>
int main()
{
 int et[20],at[10],n,i,j,temp,p[10],st[10],ft[10],wt[10],ta[10];
 int towt=0,totta=0;
 float awt,ata;
 char pn[10][10],t[10];
 printf("Enter the number of processes:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("Enter process name,arrivaltime,execution time& priority:");
   scanf("%s%d%d%d",pn[i],&at[i],&et[i],&p[i]);
 }
 for(i=0;i<n-1;i++)
 for(j=0;j<n-(i+1);j++)
 {
   if(p[j+1]<p[j])
   {
     temp=p[j+1];
     p[j+1]=p[j];
     p[j]=temp;
     temp=at[j+1];
     at[j+1]=at[j];
     at[j]=temp;
     temp=et[j+1];
     et[j+1]=et[j];
     et[j]=temp;
     strcpy(t,pn[j+1]);
     strcpy(pn[j+1],pn[j]);
     strcpy(pn[j],t);
   }
 }
 st[0]=at[0];
 for(j=0;j<n;j++)
  {
    ft[j]=st[j]+et[j];
    st[j+1]=ft[j];
  }
  for(j=0;j<n;j++)
  {
  	ta[j]=ft[j]-at[j];
  	totta=ta[j]+totta;
  	wt[j]=st[j]-at[j];
  	towt=towt+wt[j];
  }
 awt=(float)towt/n;
 ata=(float)totta/n;
 printf("\nPname\tarrivaltime\texecutiontime\tpriority\twaitingtime\ttatime");
 for(i=0;i<n;i++)
 printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d\t\t%5d",pn[i],at[i],et[i],p[i],wt[i],ta[i]);
 printf("\nAverage waiting time is:%g",awt);
 printf("\nAverage turn around time is:%g\n",ata);
 return 0;
}


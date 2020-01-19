#include<stdio.h>
#include<string.h>
int main()
{
 int et[20],at[10],n,i,j,temp,st[10],ft[10],wt[10],ta[10];
 int towt=0,totta=0;
 float awt,ata;
 char pn[10][10],t[10];
 printf("Enter the number of processes:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("Enter process name,arrival time& service time:");
   scanf("%s%d%d",pn[i],&at[i],&et[i]);
 }
 for(i=0;i<n-1;i++)
 for(j=0;j<n-(i+1);j++)
 {
   if(et[j+1]<et[j])
   {
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
 for(i=0;i<n;i++)
 {
   /*if(i==0)
   st[i]=at[i];
   else
st[i]=ft[i-1];
   wt[i]=st[i]-at[i];
   ft[i]=st[i]+et[i];
   ta[i]=ft[i]-at[i];
   towt+=wt[i];
   totta+=ta[i];*/
   printf("%4d",et[i]);
 }
 /*awt=(float)towt/n;
 ata=(float)totta/n;
 printf("\nPno\tarr.time\tser.time\twai.time\ttat");
 for(i=0;i<n;i++)
 printf("\n%s\t%5d\t\t%5d\t\t%5d\t%5d",pn[i],at[i],et[i],wt[i],ta[i]);
 printf("\nAverage waiting time is:%g",awt);
 printf("\nAverage turn around time:%g",ata);*/
 return 0;
}


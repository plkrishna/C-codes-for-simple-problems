#include<stdio.h>
int main()
{
  int i,j,n;
  int at[10],wt[10],ft[10],et[10],st[10],tat[10];
  float ata=0,awt=0;
  printf("\nEnter the number of processes:");
  scanf("%d",&n);
  printf("\nEnter the arrival times of the processes:");
  for(i=0;i<n;i++)
  scanf("%d",&at[i]);
  printf("\nEnter the service time of the processes:");
  for(i=0;i<n;i++)
  scanf("%d",&et[i]);
  st[0]=at[0];
  for(j=0;j<n;j++)
  {
    ft[j]=st[j]+et[j];
    st[j+1]=ft[j];
  }
  for(j=0;j<n;j++)
  {
  	tat[j]=ft[j]-at[j];
  	ata=tat[j]+ata;
  	wt[j]=st[j]-at[j];
  	awt=awt+wt[j];
  }
 printf("Process\tAT\tST\tSTR\tFT\tTAT\tWT\n");
  for(i=0;i<n;i++)
  printf("p%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i,at[i],et[i],st[i],ft[i],tat[i],wt[i]);
  return 0;
}


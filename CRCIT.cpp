#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N strlen(gen)
char gen[30],input[60],cs[30];
int a,i,c,b,e;
void xorr()
{
  for(c=1;c<N;c++)
    cs[c]=((cs[c]==gen[c])?'0':'1');
}
void crc()
{
  for(i=0;i<N;i++)
    cs[i]=input[i];
  do
  {
    if(cs[0]=='1')
      xorr();
    for(c=0;c<N-1;c++)
      cs[c]=cs[c+1];
    cs[c]=input[i++];
  }while(i<=a+N-1);
}
int main()
{
  int flag=0;
  strcpy(gen,"10001000000100001");
  printf("\nEnter data:");
  scanf("%s",input);
  printf("\n-----------------\n");
    printf("\n Generating Polynomial:%s",gen);
    a=strlen(input);
    for(i=a;i<a+N-1;i++)
      input[i]='0';
    printf("\nModified data is:%s",input);
    printf("\n--------------------\n");
    crc();
    printf("Checksum is:%s",cs);
    for(i=a;i<a+N-1;i++)
      input[i]=cs[i-a];
    printf("\n--------------------\n");
    printf("Final codeword is:%s",input);
    printf("\n--------------------\n");
    printf("\nTest  error detection 0(yes) 1(no)?:");
    scanf("%d",&e);
    if(e==0)
    {
      do
      {
         printf("\n\tEnter the position where error is to be inserted:");
         scanf("%d",&e);
      }while(e==0||e>a+N-1);
      input[e-1]=(input[e-1]=='0')?'1':'0';
      printf("\n----------------\n");
      printf("\n\tErroneous data:%s\n",input);
    }
    crc();
    for(i=0;(i<N-1)&&(cs[i]!='1');i++);
    if(i<N-1)
      printf("Error detected\n\n");
    else
      printf("\n No error detected \n\n");
}


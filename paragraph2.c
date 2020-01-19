//Program to print a paragraph line by line between specified positions in the line
//Example: Line:This is aditya
//Start=2,End=5 then Output:his
//The program also breaks a paragraph into words and again combines
//them to form a paragraph
#include<stdio.h>
int main()
{
	int i,j,m,n,h,t,k;
	char paragraph[100][100],c,words[100][100];
	char newpara[100];
	int line_break[10];
	i=0;
	j=0;
	int lines=0,start,end;
	while((c=getchar())!='1')
	{
		if(c=='\n')
		{
			paragraph[i++][j]='\0';
			j=0;
			lines++;
			continue;
		}
		paragraph[i][j++]=c;
	}
	printf("Paragraph:\n");
	for(i=0;i<lines;i++)
	printf("%s\n",paragraph[i]);
	printf("Enter start and end position:");
	scanf("%d%d",&start,&end);
	printf("Paragraph according to specifications:\n");
	for(i=0;i<lines;i++)
	{
		for(j=start+1;j<=end+1;j++)
		{
			printf("%c",paragraph[i][j]);
		}
		printf("\n");
	}
	m=0;
	n=0;
	h=0;
	for(i=0;i<lines;i++)
	{
		for(j=0;paragraph[i][j]!='\0';j++)
		{
			if(paragraph[i][j]==' '&&paragraph[i][j+1]!=' ')
			{
				words[m++][n]='\0';
				n=0;
				continue;
			}
			words[m][n++]=paragraph[i][j];
			if(paragraph[i][j+1]=='\0')
			{
			words[m++][n]='\0';
			n=0;
			line_break[h++]=m;            
		    }
		}
	}
	printf("Words:\n");
	for(i=0;i<m;i++)
	printf("%s\n",words[i]);
	k=0;
	t=0;
	for(i=0;i<m;i++)
	{
		for(j=0;words[i][j]!='\0';j++)
	    {
			newpara[k++]=words[i][j];
			if(i==line_break[t]-1&&words[i][j+1]=='\0')
			{
				newpara[k++]='\n';
				t++;
				break;                           
			}
			if(words[i][j+1]=='\0')
			{
				newpara[k++]=' ';
			}
		}
	}
	newpara[k]='\0';
	printf("Paragraph from words:\n");
	for(i=0;newpara[i]!='\0';i++)
	printf("%c",newpara[i]);
	return 0;
}

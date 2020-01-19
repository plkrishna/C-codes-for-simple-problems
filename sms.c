//SMS encoding
#include<stdio.h> 
#include<string.h>
void sms_encoding(char *s);
int main()
{
	char sentence[100];
	scanf("%[A-Z a-z]",sentence);
	sms_encoding(sentence);
    printf("sentence:%s",sentence);
    return 0;
}
void sms_encoding(char *s)
{
	//char tokens[100][100];
	int i,j,k,h,flag;
	int count=strlen(s);
	for(i=0;i<count;)
	{
		flag=0;
		for(j=i;s[j+1]!=' '&&s[j+1]!='\0';j++);
		k=i;
		while(k<=j)
		{
			if(s[k]!='a'&&s[k]!='e'&&s[k]!='i'&&s[k]!='o'&&s[k]!='u'&&s[k]!='A'&&s[k]!='E'&&s[k]!='I'&&s[k]!='O'&&s[k]!='U')
			{
				flag=1; break;
			}
			k++;
		}
		if(flag==1)
		{
			k=i;
			while(k<=j)
			{
				if(s[k]=='a'||s[k]=='e'||s[k]=='i'||s[k]=='o'||s[k]=='u'||s[k]=='A'||s[k]=='E'||s[k]=='I'||s[k]=='O'||s[k]=='U')
				{
					for(h=k;h<count;h++)
					s[h]=s[h+1];
					j--;
					count--;
				}
				k++;
			}
		}
		i=j+2;
	}
}


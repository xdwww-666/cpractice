#include<stdio.h>
#include<string.h>
int islower(char c)
{
	if(c>='a'&&c<='z')
	{
		return 1;
	}
	else{
		return 0;
	}
}
int isnumber(char c)
{
	if(c>='0'&&c<='9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int if_canexpand(char left,char right)
{
	int judge=0;
	if(islower(left)==1&&islower(right)==1)
	{
		judge=1;
	}
	if(isnumber(left)==1&&isnumber(right)==1)
	{
		judge=1;
	}
	if(judge==1&&left<right)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
char fill_char(char c,int p1)
{
	if(p1==3)
	{
		return '*';
	}
	if(p1==2&&islower(c)==1)
	{
		return c-'a'+'A';
	}
	return c;
}
void append_char(char str2[],int *length,char c)
{
	str2[*length]=c;
	*length+=1;
}
int main()
{
	int p1,p2,p3;
	scanf("%d %d %d",&p1,&p2,&p3);
	char str1[105],str2[1000005];
	scanf("%s",str1);
    int len1=strlen(str1);
    int len2=0;
	for(int i=0;i<len1;i++)
	{
		if(str1[i]!='-')
		{
			append_char(str2,&len2,str1[i]);
		}
		else
		{
			if(i>0&&i+1<len1&&if_canexpand(str1[i-1],str1[i+1])==1)
			{
				char left=str1[i-1];
				char right=str1[i+1];
				if(p3==1)
				{
					for(char c=left+1;c<right;c++)
					{
						char fill=fill_char(c,p1);
						for(int j=0;j<p2;j++)
						{
							append_char(str2,&len2,fill);
						}
					}
				}
				else if(p3==2)
				{
					for(char c=right-1;c>left;c--)
					{
						char fill=fill_char(c,p1);
						for(int j=0;j<p2;j++)
						{
							append_char(str2,&len2,fill);
						}
					}
				}
			}
			else
			{
				append_char(str2,&len2,'-');
			}
		}
	}
	str2[len2]='\0';
	printf("%s\n",str2);
	return 0;
}
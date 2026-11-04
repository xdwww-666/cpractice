#include<stdio.h>
#include<string.h>
char str1[20];
	char str2[1000005];
int main()
{
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
	int len1=strlen(str1);
    int len2=strlen(str2);
	if(len1>0&&str1[len1-1]=='\n')
	{
		str1[len1-1]='\0';
		len1-=1;
	}
	if(len2>0&&str2[len2-1]=='\n')
	{
		str2[len2-1]='\0';
		len2-=1;
	}
	for (int i = 0; i < len1; i++)
		{
			if (str1[i] >= 'A' && str1[i] <= 'Z')
				str1[i] += 32;
		}

	for (int i = 0; i < len2; i++)
		{
			if (str2[i] >= 'A' && str2[i] <= 'Z')
				str2[i] += 32;
		}
	int count0=0;
	int direction=-1;
	if(len2>=len1&&str2[0]==str1[0]&&(str2[len1]==' '||str2[len1] == '\0'))
	{
		int count1=0;
		for(int i=0;i<len1;i++)
		{
			if(str1[i]!=str2[i])
			{
				count1++;
			}
		}
		if(count1==0)
		{
			count0++;
            direction=0;
		}
	}
	for(int i=0;i<len2-len1;i++)
	{
		if(str2[i]==' '&&str2[i+len1+1]==' ')
		{
			int count3=0;
			for(int j=0;j<len1;j++)
			{
                if(str1[j]!=str2[i+1+j])
				{
					count3++;
				}
			}
			if(count3==0)
			{
				count0++;
				if(direction==-1)
			   {
				    direction=i+1;
			   }
			}
		}
	}
	if(str2[len2-len1-1]==' ')
	{
		int count2=0;
		for(int i=0;i<len1;i++)
		{
			if(str1[i]!=str2[len2-len1+i])
			{
				count2++;
			}
		}
		if(count2==0)
		{
			count0++;
			if(direction==-1)
			{
				direction=len2-len1+1;
			}
		}
	}
	if(count0==0)
	{
		printf("-1");
	}
	else
	printf("%d %d",count0,direction);
	return 0;
}
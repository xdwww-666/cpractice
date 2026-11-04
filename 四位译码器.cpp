#include<stdio.h>
int main()
{
	char str[4];
	for(int i=0;i<4;i++)
	{
		scanf("%c",&str[i]);
	}
	for(int j=0;j<4;j++)
	{
		if(str[j]>='a'&&str[j]<='z')
		{
			printf("%c",str[j]-32);
		}
		else if(str[j]>='A'&&str[j]<='Z')
		{
			printf("%c",str[j]+32);
		}
		else if(str[j]>='0'&&str[j]<='9')
		{
			printf("*");
		}
		else
		{
			printf("@");
		}
	}
	return 0;
} 

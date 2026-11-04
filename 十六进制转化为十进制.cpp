#include<stdio.h>
unsigned long long transform(char str[]);
int main()
{
	char str[100];
	scanf("%99s",str);
	printf("%llu",transform(str));
    return 0;
}
unsigned long long transform(char str[])
{
	int res;
	unsigned long long num=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			res=str[i]-'0';
		}
		else if(str[i]>='A'&&str[i]<='F')
		{
			res=str[i]-'A'+10;
	    }
	    else
	    {
	    	res=str[i]-'a'+10; 
		}
		num=num*16+res;
	}
	return num;
} 

#include<stdio.h>
char str[10000001];
int main()
{
	int arr[26]={0};
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		arr[str[i]-'a']=1;
	}
	int count=0;
	for(int j=0;j<26;j++)
	{
		if(arr[j]==1)
		{
			count++;
		}
	}
	if(count>10)printf("yyw");
	else
	{
		printf("%d\n",count);
		for(int k=0;k<26;k++)
		{
			if(arr[k]==1)
			{
			   printf("%c ",'a'+k);	
			}	
		}
	}
	return 0;
} 

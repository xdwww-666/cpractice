#include<stdio.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int Dcount=0;
	int Xcount=0;
	int Ncount=0;
	int i=0;
	while(1)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			Xcount++;
		}
		else if(str[i]>='A'&&str[i]<='Z')
		{
			Dcount++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			Ncount++;
		}
		i++;
		if(str[i]=='\0')
		{
			break;
		}
	}
	printf("%d %d %d",Dcount,Xcount,Ncount);
	
	 
}

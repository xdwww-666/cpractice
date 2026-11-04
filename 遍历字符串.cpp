#include<stdio.h>
int main()
{
	char str[100];
	printf("请录入一个字符串：");
	scanf("%s",str);
	char* p=&str[0];
	while(1)
	{
		if(*p=='\0')
		{
			break;
		}
		printf("%c\n",*p);
		p++;
	}
	return 0;
}

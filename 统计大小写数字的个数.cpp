#include<stdio.h>
int main()
{
	printf("请输入一个字符串：");
	char str[100];
	scanf("%s",str); 
	int Dcount=0;
	int Xcount=0;
	int Ncount=0;
	int i=0;
	while(1)
	{
		char c=str[i];
    	if(c>='A'&&c<='Z')
    	{
    		Dcount++;
		}
		if(c>='a'&&c<='z')
		{
			Xcount++;
		}
		if(c>='0'&&c<='9')
		{
			Ncount++;
		}
		if(c=='\0')
		{
			break;
		}
		i++;
	} 
	printf("大写字母的个数是：%d\n",Dcount);
	printf("小写字母的个数是：%d\n",Xcount);
	printf("数字的个数是：%d\n",Ncount);
	return 0;
}





#include<stdio.h>
#include<string.h>
int main()
{
	char* username1="xiaoqie";
	char* password1="123456xqe";
	for(int i=1;i<=3;i++)
	{
		printf("请输入用户名："); 
		char name[100];
		scanf("%s",name);
		printf("请输入密码：");
		char password[100];
		scanf("%s",password);
		int res1=strcmp(username1,name);
		int res2=strcmp(password1,password);
		if(!res1&&!res2)
		{
			printf("登陆成功\n"); 
			break;
		}
		else
		{
			if(i==3)
			{
				printf("您的账号已经被锁定，请15分钟后再次尝试\n"); 
				break;
			}
			printf("账号或者密码错误，您还有%d次机会\n",3-i);
		}
	} 
	return 0; 
} 




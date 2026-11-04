#include<stdio.h>
struct girlfriend
{
	char name[100];
	int age;
}; 
int main()
{
	struct girlfriend gl1={"zhangsan",66};
	struct girlfriend gl2={"lisi",22};
	struct girlfriend gl3={"zhaowu",18};
	struct girlfriend girlarr[3]={gl1,gl2,gl3};
	for(int i=1;i<=3;i++)
	{
		struct girlfriend temp=girlarr[i-1];
		printf("女朋友的名字为：%s\t 年龄为：%d\n",temp.name,temp.age );
	}
	return 0;
}

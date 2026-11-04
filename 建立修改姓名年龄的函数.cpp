#include<stdio.h>
typedef struct student{
	char name[100];
	int age;
}s;
void modify(s* p); 
int main()
{
	s stu={"aaa",0};
	printf("原始姓名为：%s 年龄为：%d\n",stu.name,stu.age);
	modify(&stu);
	printf("修改后的名字为：%s 修改后的年龄为：%d\n",stu.name,stu.age);
	return 0;
} 

void modify(s* p)
{
	printf("请输入修改后的名字："); 
	scanf("%s",(*p).name);
	printf("请输入修改后的年龄：");
	scanf("%d",&(*p).age);
	printf("修改后的名字为：%s 修改后的年龄为：%d\n",(*p).name,(*p).age);
}

#include<stdio.h>
int getreminder(int num1,int num2,int* res); 
int main()
{
	int a;
	int b;
	int res;
	scanf("%d",&a);
	printf("\n");
	scanf("%d",&b);
	int flag=getreminder(a,b,&res);
	if(!flag)
	{
	   printf("获取到的余数为：%d",res);
	}
	return 0; 
}
int getreminder(int num1,int num2,int* res)
{
	if(num2==0)
	{
		return 1;
	}
	else
	{
		*res=num1%num2;
		return 0;
	}
}

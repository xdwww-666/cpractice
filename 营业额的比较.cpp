#include<stdio.h>
int sum(int money1,int money2,int money3)
{
	int sum=money1+money2+money3;
	printf("第一季度的营业额是：%d万元\n",sum);
	return sum;
} 
int main()
{
	int season1=sum(10,20,15);
	int season2=sum(20,30,17); 
	int season3=sum(19,17,20);
	int season4=sum(23,21,19);
	int max1=season1>season2?season1:season2;
	int max2=max1>season3?max1:season3;
	int heighest=max2>season4?max2:season4;
	if(heighest==season1)
	{
		printf("营业额最高的季度是：第一季度"); 
	}
	else if(heighest==season2)
	{
		printf("营业额最高的季度是：第二季度"); 
	}
	else if(heighest==season3)
	{
		printf("营业额最高的季度是：第三季度"); 
	}
	else 
	{
		printf("营业额最高的季度是：第四季度"); 
	}
	return 0; 
}

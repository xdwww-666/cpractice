#include<stdio.h>
int add(int num1,int num2);
int subtract(int num1,int num2);
int multiply(int num1,int num2);
int divide(int num1,int num2);
int main()
{
	int(*arr[4])(int,int)={add,subtract,multiply,divide};
	printf("请输入要参与运算的两个数字：");
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	printf("请输入进行运算的类型代表数字：");
	int choose;
	scanf("%d",&choose);
	int res=arr[choose-1](num1,num2);
	printf("%d",res); 
	return 0; 
}
int add(int num1,int num2)
{
	return num1+num2;
}
int subtract(int num1,int num2)
{
	return num1-num2;
}
int multiply(int num1,int num2)
{
	return num1*num2;
}
int divide(int num1,int num2)
{
	return num1/num2;
}

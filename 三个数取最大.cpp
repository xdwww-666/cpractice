//#include<stdio.h>
//int main(){
//	int a=10;
//	int b=30;
//	int c=20;
//	int d=a>b?a:b;
//	int e=d>c?d:c;
//	printf("%d",e);
//	return 0;
//	
//} 

#include<stdio.h>
int main(){
	int num;
	printf("请输入一个数字：");
	scanf("%d",&num);
	int num1=num>0?num:-num;
	int num2=num1%3;
	int num3=num2*10;
	printf("%d",num3);
	return 0;
}

#include<stdio.h>
int main(){
	int a;
	printf("请输入一个两位整数：");
	scanf("%d",&a);
	printf("%d",a%10!=7&&a/10!=7&&a%7!=0);
	return 0;
}  


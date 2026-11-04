#include<stdio.h>
int main(){
	int num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	int a=0;
	while(num!=0){
		int i;
		i=num%10;
		num/=10;
		a=a*10+i;	
	}
	printf("这个个数倒过来是：%d",a);
	return 0;
}

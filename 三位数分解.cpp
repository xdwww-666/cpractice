#include<stdio.h>
int main(){
	int num;
	printf("请输入一个三位数：");
	scanf("%d",&num);
	int ge=num%10;
	int shi=num/10%10;
	int bai=num/100;
	printf("个位：%d\n",ge);
	printf("十位：%d\n",shi);
	printf("百位：%d\n",bai);
	return 0;
	 
} 

#include<stdio.h>
int main(){
	int num1,num2,sum=0;
	printf("请输入两个数字:");
	scanf("%d %d",&num1,&num2);
	int min=num1<num2?num1:num2;
	int max=num1>num2?num1:num2;
	for(int i=min;i<=max;i++){
		if(i%6==0&&i%8==0){
			sum=sum+1;
		}
	}
    printf("%d",sum);	
	return 0;
} 

#include<stdio.h>
int main(){
	int num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	int i=num;
	while(i>1&&i%2==0){
		   i=i/2; 
		}
	if(i==1)
	    {
	     printf("这个数是否是2的次幂数：yes"); 
		}
	else{
		 printf("这个数是否是2的次幂数：no"); 
		}
	return 0;    
}

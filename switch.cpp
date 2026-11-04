#include<stdio.h>
int main(){
	int num;
	printf("请选择你要拨打的按键：");
	scanf("%d",&num);
	switch(num){
	  case 1:
	  	printf("机票查询");
	  	break;
	  case 2:
	    printf("机票预订");
	    break;
	  case 3:
	  	printf("机票改签");
	  	break;
	  default:
	    printf("其他服务");
		break; 
	} 
	return 0;
} 

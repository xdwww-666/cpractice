#include<stdio.h>
int main(){
	int score;
	printf("请输入成绩：");
	scanf("%d",&score); 
	if(score>=95&&score<=100){
		printf("自行车一辆");
	}
	else if(score>=90&&score<=94){
		printf("游乐场畅玩晚一天"); 
	}
	else if(score>=80&&score<=89){
		printf("变形金刚一个"); 
    }
    else{
    	printf("胖揍一顿"); 
	} 
	return 0; 
}

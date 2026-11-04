#include<stdio.h>
int main(){
	printf("小宝宝喜欢宝宝二号嘛？");
	int answer; 
	scanf("%s",&answer);
	int yes=1;
	if(answer==1){
		printf("小企鹅二号也喜欢宝宝！！"); 
	}
	else{
		printf("嗷嗷哭"); 
	} 
	return 0;
}

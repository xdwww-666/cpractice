#include<stdio.h>
int main(){
	int height=8844430;
	double i=0.1;
	int num=0; 
	while(i<=height){
		i*=2;
		num=num+1;
	}
	printf("%d",num);
	return 0;
}

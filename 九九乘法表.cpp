#include<stdio.h>
int main(){
    for(int i=1;i<=9;i++){
    	for(int j=1;j<=i;j++){
    		int k=i*j;
    		printf("%d*%d=%d\t",j,i,k);
		}
		printf("\n");
	}
    return 0;
}

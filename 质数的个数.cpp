#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个整数:");
	scanf("%d",&num);
	int i=2;
	int sum=0;
	while(i<=num)
	{
		int count=0;
		for(int j=2;j<i;j++)
		    {
			if(i%j==0){
				count++;
				break;
			          }
			}
		if(count==0){
			sum=sum+1;
		            }	
		i++;	
	}
	printf("小于等于这个数的质数的个数是：%d",sum);
	return 0;
}

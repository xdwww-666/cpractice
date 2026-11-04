#include<stdio.h>
int main()
{
	long long n;
	printf("请输入一个大于一的正整数：");
	scanf("%d",&n);
	long long i=1;
	long long sum=0;
	while(i<=n)
	{   
	    long long num=1;
		for(long long j=1;j<=i;j++)
		{
		   num*=i;	
		}
		sum+=num;
		i++;
	}
	printf("n的n次方的前n项和为：%lld",sum); 
	return 0;
} 

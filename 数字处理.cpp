#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	long long sum=0;
	while(1)
	{
		int a=n%10;
		sum+=a;
		n=n/10;
		if(n==0&&sum<10)
		{
			printf("%lld",sum);
			break;
		}
		if(n==0&&sum>=10)
		{
			n=sum;
			sum=0;
			
		}

	}
	return 0;
	
} 

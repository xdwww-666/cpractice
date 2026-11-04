#include<stdio.h>
int main()
{
	int p;
	scanf("%d",&p);
	int n=2;
	int count2=0,sum=0,count3=0;
	while(1)
	{
		int count=0;
		//判断是否是质数 
		for(int i=2;i<=n-1;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			 count2++;
		}
		if(count2==p)
		{
			sum+=n;
			p++;
			count3++;
		} 
		if(count3==11)
		{
			break;
		}
		n++; 
	}
	printf("%d",sum);
	return 0;
}

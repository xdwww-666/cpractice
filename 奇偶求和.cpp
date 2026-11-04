#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	long long num;
	int n=1,k=1;
	int sum_even=0,sum_odd=0,count1=0,count2=0;
	while(1)
	{
		num=3*(n-1)*(n-1)+2*(n-1)+1;
		if(num>100)
		{
			if(num%2!=0)
			{
				sum_odd+=num;
				count1++;
			}
		}
		if(count1==m-1)
		{
			break;
		}
		n++;
	}
	while(1)
	{
		int num=3*(k-1)*(k-1)+2*(k-1)+1;
		if(num>100)
		{
			if(num%2==0)
			{
				sum_even+=num;
				count2++;
			}
		}
		if(count2==m)
		{
			break;
		}
	    k++;
	}
	printf("%d %d",sum_even,sum_odd);
	return 0;
} 

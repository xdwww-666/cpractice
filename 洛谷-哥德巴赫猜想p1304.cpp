#include<stdio.h>
int judge(int x);
int main()
{
	int N;
	scanf("%d",&N);
	int arr[10000];
	int count=0;
	for(int i=4;i<=N;i++)
	{
		if(i%2==0)
		arr[count++]=i;
	}
	for(int i=0;i<count;i++)
	{
		printf("%d=%d+%d\n",arr[i],judge(arr[i]),arr[i]-judge(arr[i]));
	}
	return 0;
}
int judge(int x)
{
	for(int i=2;i<x;i++)
	{
		int count=0;
		for(int k=2;k*k<=i;k++)
		{
			if(i%k==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			int count1=0;
			for(int k=2;k*k<=x-i;k++)
			{
				if((x-i)%k==0)
				{
					count1++;
				}
		    }
			if(count1==0)
			{
				return i;
			}
		}
	}
	return -1;
}
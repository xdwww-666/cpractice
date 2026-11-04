#include<stdio.h>
int main()
{
	int n,arr[1100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=arr[0]-arr[1];
	if(min<0)
	{
		min=-min;
	}
	for(int k=0;k<n-1;k++)
	{
		for(int m=k+1;m<=n-1;m++)
		{
			int gap=arr[k]-arr[m];
			if(gap<0)
			{
				gap=-gap;
			}
			if(gap<min)
			{
				min=gap;
			}
		}
	}
	printf("%d",min);
    return 0;
	
} 

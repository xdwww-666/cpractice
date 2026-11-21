#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	long arr[105]={0};
	for(int i=0;i<=n;i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				long temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		} 
	}
	for(int i=0;i<=n;i++)
	{
		printf("%ld ",arr[i]);
	}


}

#include<stdio.h>
int main()
{
	int n;
	int arr[1005];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
} 

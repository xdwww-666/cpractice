#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]); 
	}
	for(int k=0;k<n-1;k++)
	{
		for(int j=k+1;j<n;j++)
		{
			if(arr[j]<arr[k])
			{
				int temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int count=0;
	for(int m=0;m<n-1;m++)
	{
		if(arr[m+1]-arr[m]!=arr[1]-arr[0])
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("%d",arr[1]-arr[0]);
	}
	else
	{
		printf("no");
	}
	return 0;
} 

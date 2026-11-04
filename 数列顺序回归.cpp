#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[100][100];
	int arr2[100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]); 
		}
	}
    for(int i=0;i<n;i++)
	{
		if(arr[i][1]==0)
		{
			arr2[n-1]=arr[i][0];
		}	 
	}
	for(int k=n-2;k>=0;k--)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i][1]==arr2[k+1])
			{
				arr2[k]=arr[i][0];
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		printf("%d ",arr2[j]);
	}
} 

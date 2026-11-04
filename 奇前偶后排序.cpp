#include<stdio.h>
int compare(int x,int y);
int main()
{
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=1;j<n;j++)
	{
		for(int k=0;k<n-j;k++)
		{
			int t=compare(arr[k],arr[k+1]);
			if(t==0)
			{
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
        }
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
int compare(int x,int y)
{
	if(x%2!=0&&y%2==0)
	{
		return 1;
	}
	else if(x%2==0&&y%2!=0)
	{
		return 0;
	}
	else
	{
		if(x<=y)return 1;
		else return 0;
	}
} 

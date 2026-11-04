#include<stdio.h>
int fun(int arr[],int x); 
int main()
{
	int x;
	scanf("%d",&x);
	int arr[1000];
	int res=fun(arr,x);
	printf("%d\n",res);
	for(int j=0;j<res;j++)
	{
		printf("%d ",arr[j]);
	}
	
}
int fun(int arr[],int x)
{

	int k=0;
	for(int i=2;i<=x;i++)
	{
		int count=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			arr[k]=i;
			k++;
		}
	}
	return k;
}


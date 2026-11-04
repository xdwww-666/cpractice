#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i-1]);
	}
	for(int j=0;j<=n-2;j++)
	{
		for(int m=j+1;m<=n-1;m++)
		{
		     if(arr[m]<arr[j])
		     {
		     	int temp=arr[m];
		     	arr[m]=arr[j];
		     	arr[j]=temp;
			 }
		}
	}
	int num;
	if(n%2==0)
	{
		num=(arr[(n-2)/2]+arr[n/2])/2;
	}
	else
	{
		num=arr[(n-1)/2];
	}
	printf("%d",num);
	return 0;
} 

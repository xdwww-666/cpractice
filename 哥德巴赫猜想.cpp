#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[1000];
	int a=0;
	for(int i=2;i<n;i++)
	{
		int count=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)count++;
		}
		if(count==0)
		{
			arr[a]=i;
			a++;
		}
	}
	int min=arr[0];
	for(int i=0;i<a-1;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	for(int j=0;j<a-1;j++)
	{
		int count1=0;
		for(int k=a-1;k>=1;k--)
		{
			if(arr[j]+arr[k]==n)
			{
				printf("%d %d",arr[j],arr[k]);
				count1++;
			    break;
			}
		}
		if(count1!=0)break;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int arr[25][25];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int arr1[100];
	int sum3=0;
	int sum4=0;
	int n=0;
	int t=m-1;
	for(int i=0;i<m;i++)
	{
		int sum1=0;
		for(int j=0;j<m;j++)
		{
			sum1+=arr[i][j];
		}
		arr1[i]=sum1;
		int sum2=0;
		for(int j=0;j<m;j++)
		{
			sum2+=arr[j][i];
		}
		arr1[i+m]=sum2;
		sum3+=arr[i][n];
		n++;
		arr1[2*m]=sum3;
		sum4+=arr[i][t];
		t--;
		arr1[2*m+1]=sum4; 
	}
	for(int i=0;i<2*m+1;i++)
	{
		for(int j=0;j<2*m+2-i-1;j++)
		{
			if(arr1[j]<arr1[j+1])
			{
				int temp=arr1[j+1];
				arr1[j+1]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	for(int i=0;i<2*m+2;i++)
	{
		printf("%d ",arr1[i]);
	}
	return 0;
} 

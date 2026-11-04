#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[100][100];
	for(int i=0;i<m;i++)
	{
		for(int k=0;k<n;k++)
		{
			scanf("%d",&arr[i][k]);
		}
	}
	int arr1[100];
	for(int j=0;j<m;j++)
	{
		int min=arr[j][0];
		for(int t=0;t<n;t++)
		{
	        if(arr[j][t]<min)
	        {
	        	min=arr[j][t];
			}
		}
		arr1[j]=min;
	} 
	int count2=0;
	for(int p=0;p<n;p++)
	{
		int max=arr[0][p];
		int a=0;
		for(int g=0;g<m;g++)
		{
			if(arr[g][p]>max)
			{
				max=arr[g][p];
				a=g;
			}
		}
		if(max==arr1[a])
		{
			printf("%d %d %d",a,p,max);
			count2++;
		}
	}
	if(count2==0)
	{
		printf("no");
	}
	
	 return 0;
}

#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	int arr[T][10][10];
	int arr2[T]; 
	for(int i=0;i<T;i++)
	{
		int n;
		scanf("%d",&n);
		arr2[i]=n;
		for(int j=0;j<n;j++)
		{
			for(int t=0;t<n;t++)
			{
				scanf("%d",&arr[i][j][t]);
			}
		//	printf("\n");
		}
		//printf("\n");
	}
	for(int x=0;x<T;x++)
	{
	   int count=0;
		for(int k=0;k<arr2[x];k++)
	   {
		for(int m=0;m<k;m++)
		{
			if(arr[x][k][m]!=0)
			{
				count++;
			}
		}
	   }
	   if(count==0)
	   {
	   	printf("YES\n");
	   }
	   else
	   {
	   	printf("NO\n");
	   }
	}
	return 0;
}

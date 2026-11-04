#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	} 
	int arr2[100][100];
	for(int k=0;k<n;k++)
	{
		for(int t=0;t<m;t++)
		{
			arr2[k][t]=arr[m-1-t][k];
			printf("%d ",arr2[k][t]);
		}
		printf("\n");
	}
	return 0;
}

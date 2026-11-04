#include<stdio.h>
int arr1[40001]={0};
int main()
{
	scanf("%d",&arr1[0]);
	int count=0;
	int n=arr1[0];
	int num=0;
	while(num<n*n)
	{
		count++;
		scanf("%d",&arr1[count]);
		num+=arr1[count];
	}
	int arr2[200][200];
	int row=0,col=0;
    for(int i=1;i<=count;i++)
	{
		int k=0;
		if(i%2==0)
		{
            k=1;
		}
		for(int j=1;j<=arr1[i];j++)
		{
			arr2[row][col]=k;
			col++;
			if(col>=n)
			{
				row++;
				col=0;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
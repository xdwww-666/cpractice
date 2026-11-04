#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[256][256];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int arr2[16];
    for(int k=0;k<=15;k++)
    {
    	arr2[k]=0;
	}
	for(int a=0;a<n;a++)
	{
		for(int b=0;b<m;b++)
		{
			for(int c=0;c<=15;c++)
			{
				if(arr[a][b]==c)
				{
					arr2[c]++;
				}
			}
		}
	}
    for(int d=0;d<=15;d++)
    {
    	if(arr2[d]==0)
    	{
    		continue;
		}
		else
		{
			printf("%d %d\n",d,arr2[d]);
		}
	}
	return 0;
}

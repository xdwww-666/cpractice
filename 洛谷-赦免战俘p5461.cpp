#include<stdio.h>
#include<math.h>
int arr[1500][1500];
void solve(int x,int y,int len);
int main()
{
	int n;
	scanf("%d",&n);
	int k=pow(2,n);
    for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		{
			arr[i][j]=1;
		}
	}
	solve(0,0,k);
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void solve(int x,int y,int len)
{
	if(len==1)
	{
		return;
	}
    int half=len/2;
	for(int i=x;i<x+half;i++)
	{
		for(int j=y;j<y+half;j++)
		{
			arr[i][j]=0;
		}
	}
	solve(x,y+half,half);
	solve(x+half,y,half);
	solve(x+half,y+half,half);
}
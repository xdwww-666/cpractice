#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int D=0,h=0,l=0;
	int arr[15][15]={0};
	for(int i=1;i<=N*N;i++)
	{
		arr[h][l]=i;
		if(arr[h][l+1]==0&&D==0&&l<N-1)
		{
		   l++;
		}
		else if((l==N-1||arr[h][l+1]!=0)&&D==0)
		{
			h++;
			D=1;
		}
		else if(arr[h+1][l]==0&&D==1&&h<N-1)
		{
			h++;
		}
		else if((h==N-1||arr[h+1][l]!=0)&&D==1)
		{
			l--;
			D=2;
		}
		else if(arr[h][l-1]==0&&D==2&&l>0)
		{
			l--;
		}
		else if((l==0||arr[h][l-1]!=0)&&D==2)
		{
			h--;
			D=3;
		}
		else if(arr[h-1][l]==0&&D==3)
		{
			h--;
		}
		else if(arr[h-1][l]!=0&&D==3)
		{
			l++;
			D=0;
		}
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%-4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

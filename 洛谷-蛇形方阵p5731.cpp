#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[10][10]={0};
	int row=1,col=1;
	int direction=0;
	int dr[4]={0,1,0,-1};
	int dc[4]={1,0,-1,0};
	for(int i=1;i<=n*n;i++)
	{
		arr[row][col]=i;
		int newrow=row+dr[direction];
		int newcol=col+dc[direction];
		if(newrow<1||newrow>n||newcol<1||newcol>n||arr[newrow][newcol]!=0)
		{
			direction=(direction+1)%4;
            newrow=row+dr[direction];
			newcol=col+dc[direction];
		}
		row=newrow;
		col=newcol;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
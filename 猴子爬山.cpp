#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int ways[51]={0};
	ways[1]=1;
	ways[2]=1;
	ways[3]=2;
    for(int i=4;i<=N;i++)
    {
    	ways[i]=ways[i-1]+ways[i-3]; 
	}
	printf("%d",ways[N]);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,arr[100];
	scanf("%d %d",&n,&m);
	int k=pow(2,n); 
	for(int i=0;i<k;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=k-1;
	for(int j=0;j<m;j++)
	{
		for(int t=0;t<(max+1)/2;t++)
		{
			arr[t]=arr[t]+arr[max-t];
		}
		max=(max-1)/2;
	}
	int len=max+1;
	for(int p=0;p<len;p++)
	{
		printf("%d ",arr[p]);
	}
}

#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int arr[3]={a,b,c};
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=3-i;j++)
		{
			if(arr[j-1]>arr[j])
			{
				int temp;
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	} 
	if(arr[0]+arr[1]<=arr[2])
	{
		printf("不是三角形"); 
	}
	else if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2])
	{
		printf("%d",arr[0]*arr[1]/2);
	}
	else
	{
		printf("其他三角形"); 
	}
	return 0;
}


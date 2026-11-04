#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[1000];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n-1;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(arr[k]<arr[j])
			{
				int temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int arr2[1000];
	arr2[0]=arr[0];
	int m=0;
    for(int t=1;t<n;t++)
    {
        if(arr[t]!=arr[t-1])
        {
        	m++;
        	arr2[m]=arr[t];
		}
	}
	for(int p=0;p<=m;p++)
	{
		if(p!=0){
			printf(" ");
		}
		printf("%d",arr2[p]);
	}
	return 0;
}

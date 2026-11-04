#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    int arr2[100];
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	int num=0;
	for(int j=0;j<n-1;j++)
	{
		int max=arr[j]>arr[j+1]?arr[j]:arr[j+1];
		int t=max;
		int min=arr[j]<arr[j+1]?arr[j]:arr[j+1];
	    while(1)
		{
			if(max%min==0)
			{
				num+=max; 
				break;
			}
		    max+=t;
		} 
	}
	printf("%d",num);
}

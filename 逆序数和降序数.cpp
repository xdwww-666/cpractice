#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	int arr[100];
	int i=0,count=0;
	while(1)
	{
	    arr[i++]=n%10;
		n/=10;
		count++;
		if(n==0)
		{
			break;
		}
	}
	long long sum=0;
	for(int c=0;c<count;c++)
	{
		sum=sum*10+arr[c];
	}
	for(int k=0;k<count-1;k++)
	{
		for(int j=k+1;j<count;j++)
		{
			if(arr[j]>arr[k])
			{
				int temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}
	long long  sum2=0;
	for(int m=0;m<count;m++)
	{
		sum2=sum2*10+arr[m];
	}
	printf("%lld",sum2+sum);
}

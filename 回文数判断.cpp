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
	int arr2[100];
	for(int k=0;k<count;k++)
	{
		arr2[k]=arr[count-1-k];
	}
	int count2=0,sum=0;
	for(int m=0;m<count;m++)
	{
		if(arr[m]!=arr2[m])
		{
			count2++;
		}
		sum+=arr[m];
	}
	if(count2==0)
	{
		printf("%d",sum);
	}
	else
	{
		printf("no");
	}
}

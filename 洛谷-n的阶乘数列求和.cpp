#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[100]={1};
    int arr2[100]={0};
    for(int i=1;i<=n;i++)
    {
    	int carry=0;
    	for(int j=0;j<100;j++)
    	{
    		int value=arr1[j]*i+carry;
    		arr1[j]=value%10;
    		carry=value/10;
		}
		int carry2=0;
		for(int k=0;k<100;k++)
		{
			int value=carry2+arr1[k]+arr2[k];
			arr2[k]=value%10;
			carry2=value/10;
		}
	}
	int heighest=99;
	while(heighest>0&&arr2[heighest]==0)
	{
			heighest--;
	}
	for(int i=heighest;i>=0;i--)
	{
		printf("%d",arr2[i]);
	}
}

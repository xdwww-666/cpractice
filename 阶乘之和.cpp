#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
    int arr1[100]={1},arr2[200]={0};
	for(int i=1;i<=k;i++)
	{
		int carry1=0;
		for(int j=0;j<100;j++)
		{ 
		    int value=arr1[j]*i+carry1;
		    arr1[j]=value%10;
		    carry1=value/10;
		}
		int carry2=0;
		for(int t=0;t<200;t++)
		{
			int value=arr2[t]+carry2+ arr1[t];
			arr2[t]=value%10;
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

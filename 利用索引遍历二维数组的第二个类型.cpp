#include<stdio.h>
int main()
{
	int arr1[]={1,5,6,7};
	int arr2[]={2,7,6};
	int arr3[]={6,9};
	int* arr[]={arr1,arr2,arr3};
	int len1=sizeof(arr1)/sizeof(int); 
	int len2=sizeof(arr2)/sizeof(int); 
	int len3=sizeof(arr3)/sizeof(int); 
	int lenarr[]={len1,len2,len3};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<lenarr[i];j++)
		{
		   printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

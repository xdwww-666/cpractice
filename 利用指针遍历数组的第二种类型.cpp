#include<stdio.h>
int main()
{
	int arr1[]={1,4,3,5,2,6};
	int arr2[]={66,88,99,77};
	int arr3[]={666,999,888};
	int* arr[]={arr1,arr2,arr3};
	int len1=sizeof(arr1)/sizeof(int);
	int len2=sizeof(arr2)/sizeof(int);
    int len3=sizeof(arr3)/sizeof(int);
    int lenarr[]={len1,len2,len3};
	int**p=arr;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<lenarr[i];j++)
	    {
			printf("%d\t",*(*p+j));
		}
		printf("\n");
		p++; 
	}
	return 0;
}

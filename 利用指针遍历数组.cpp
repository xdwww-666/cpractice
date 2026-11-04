#include<stdio.h>
int main()
{
	int arr[]={91,78,95,8,94,66};
	int len=sizeof(arr)/sizeof(int);
	int* p1=&arr[0];
	for(int i=0;i<len;i++)
	{
		printf("%d\n",*p1++);
	}
	return 0;
}

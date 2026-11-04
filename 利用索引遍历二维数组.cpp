#include<stdio.h>
int main()
{
	int arr[3][5]
	{
		{1,6,8,9,5},
		{55,88,99,77,33},
		{666,999,888,333,222}
	};
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<5;j++)
	    {
	    	printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

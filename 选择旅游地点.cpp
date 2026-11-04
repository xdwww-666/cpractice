#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int max(int arr1[],int len);
int main()
{
	srand(time(NULL)); 
	int num1=rand()%80;
	int num2=rand()%80;
	int num3=rand()%80;
	int num4=rand()%80;
	printf("%d %d %d %d\n",num1,num2,num3,num4);
	int arr[]={num1,num2,num3,num4};
	int len1=sizeof(arr)/sizeof(int);
	int max2=max(arr,len1);

    switch(max2)
    {
    	case 0:
    		printf("选A地");
			break;
		case 1:
    		printf("选B地");
			break;
		case 2:
    		printf("选C地");
			break;
		case 3:
    		printf("选D地");
			break;
		 
	}
	
	return 0;
	
}
int max(int arr1[],int len)
{
	int max3=0;
	for(int i=1;i<len;i++)
	{
		if(arr1[max3]<arr1[i])
		{
			max3=i;
		}
	}
	return max3;
}

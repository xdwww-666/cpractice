#include<stdio.h>
void compare(int arr[],int len,int* max,int* min); 
int main()
{
   int arr[]={4,7,5,8,4,6,2,9,10,50};
   int len=sizeof(arr)/sizeof(int);
   int max=arr[0];
   int min=arr[0];
   compare(arr,len,&max,&min);
   printf("最大值是：%d",max);
   printf("最小值是：%d",min);
   return 0;
} 

void compare(int arr[],int len,int* max,int* min)
{
   *max=arr[0];
   for(int i=1;i<len;i++)
   {
   	 if(*max<arr[i])
   	 {
   	 	*max=arr[i];
     }
   }
   *min=arr[0];
   for(int i=1;i<len;i++)
   {
   	 if(*min>arr[i])
   	 {
   	 	*min=arr[i];
     }
   }
}

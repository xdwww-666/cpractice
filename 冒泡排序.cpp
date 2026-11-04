#include<stdio.h>
int main()
{
   int arr[]={8,7,9,5,6};
   int len=sizeof(arr)/sizeof(int);
   for(int i=1;i<=(len-1);i++)
   {
   	for(int j=0;j<=(4-i);j++)
   	{
   	   int temp=arr[j];
	   if(temp>=arr[j+1]) 
	   {
	   	    arr[j]=arr[j+1];
			arr[j+1]=temp;
	   } 
    }
   }
   for(int k=0;k<=(len-1);k++)
   {
   	printf("%d",arr[k]);
   }
   return 0; 
}

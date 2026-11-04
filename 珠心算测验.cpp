#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr2[100];
    int count=0;
    for(int k=0;k<n;k++)
    {
	     for(int t=0;t<n-1;t++)
        {    if(t<k)
          {
             arr2[t]=arr[t];
          }
             else
          {
             arr2[t]=arr[t+1];
          }
        }
      int count2=0;
      for(int m=0;m<n-2;m++)
      {
          for(int p=m+1;p<n-1;p++)
          {
              int sum=arr2[m]+arr2[p];
              if(sum==arr[k])
              {
                  count++;
                  count2++;
                  break;
              }
          }
          if(count2==1)
          {
              break;
          }
      }
    }
    printf("%d",count);
}

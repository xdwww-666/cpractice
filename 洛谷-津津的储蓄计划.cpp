#include<stdio.h>
int main()
{
      int arr[12];
      for(int i=0;i<12;i++)
      {
        scanf("%d",&arr[i]);
      }
      int temp=0,count=0;
      int Q=0;
      for(int j=0;j<12;j++)
      {
        temp=300-arr[j]+temp;
        if(temp>=100)
        {
            int n=temp/100;
            Q+=n*100;
            temp-=n*100;
        }
        if(temp<0)
        {
            printf("%d",-(j+1));
            break;
        }
        count++;
      }
      if(count==12)
      {
          printf("%d",temp+Q*6/5);
      }
      
}



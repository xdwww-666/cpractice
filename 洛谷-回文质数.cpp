#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    int arr1[10];
    int arr2[10];
    for(long long  i=a;i<=b;i++)
    {
        long long k=i;
        int count1=0;
        for(int j=0;j<10;j++)
        {
            arr1[j]=k%10;
            k/=10;
            if(k!=0) count1++;
        }
        for(int k=0;k<=count1;k++)
        {
            arr2[count1-k]= arr1[k];
        }
        int count2=0;
        for(int t=0;t<=count1;t++)
        {
            if(arr1[t]!=arr2[t])count2++;
        }
        if(count2==0)
        {
            int count3=0;
            for(int m=2;m<i;m++)
            {
                if(i%m==0){
                	count3++;
                	break;
				}
            }
            if(count3==0)printf("%lld\n",i);
        }
    }
    return 0;
}

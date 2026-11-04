#include<stdio.h>
int main()
{
    long long n;
    int x;
    long long count=0;
    scanf("%lld %d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        int k=i;
        while(1)
        {
            int a=k%10;
            if(a==x)
            {
                count++;
            }
            k/=10;
            if(k==0)
            {
                break;
            }
        }
    }
    printf("%lld",count);
}

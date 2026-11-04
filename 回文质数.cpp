#include<stdio.h>
int main()
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	for(int len=1;len<10;len++)
	{
		int half=(len+1)/2;
		int start=1;
		for(int i=1;i<half;i++)
		{
			start*=10;
		}
		for(int j=start;j<start*10;j++)
		{
			long long k=j;
			int tail=j;
			if(len%2!=0)
			{
				tail/=10;
			}
			while(tail>0)
			{
			    k=k*10+tail%10;
			    tail/=10;
	        }
	        if(k>b)
	        {
	        	return 0;
			}
			if(k<a)
			{
				continue;
			}

            if (k < 2)
            {
                continue;
            }

            int count = 0;
            for (long long n = 2; n <= k / n; n++)
            {
            if (k % n == 0)
              {
                count = 1;
                break;
              }
            }

            if (count == 0)
            {
                printf("%lld\n", k);
            }
		}
	}
}

#include<stdio.h>
unsigned long long fact(int n);
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%llu ",fact(i));
	}
	return 0;
	 
} 
unsigned long long fact(int n)
{
		unsigned long long sum=1;
		for(int j=1;j<=n;j++)
		{
			sum*=j;
		}
		return sum; 
}

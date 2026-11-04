#include <stdio.h>
void printFactorial(int n);
int main()
{
int n;
scanf("%d", &n);
printFactorial(n);
return 0;
}
void printFactorial(int n)
{
	if(n>1000||n<0)
	{
		printf("Invalid input");
	}
	else
	{
	    long long sum=1;
		for(int i=1;i<=n;i++)
		{
			sum*=i;
		}
		printf("%lld",sum);
	}
}

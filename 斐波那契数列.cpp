#include<stdio.h>
int fib(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int res=fib(n);
	printf("%d",res);
	return 0;
}
int fib(int n)
{
	int F0=7,F1=11,F;
	if(n==0)
	{
	    F=7;
	}
	if(n==1)
	{
		F=11;
	}
	for(int i=1;i<n;i++)
	{
		F=F0+F1;
		int temp=F1;
		F1=F;
		F0=temp;
	}
	return F;
}

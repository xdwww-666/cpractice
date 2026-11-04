#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	float sum=3.5;
	float A1=2.0,A2=3.0,B1=1.0,B2=2.0;
	for(int i=2;i<n;i++)
	{
	      float A3=A1+A2;
	      float temp=A2;
	      A2=A3;
	      A1=temp;
	      float B3=B1+B2;
	      float temp1=B2;
	      B2=B3;
	      B1=temp1;
	      sum+=A3/B3;
	}
	printf("%.2f",sum);
}

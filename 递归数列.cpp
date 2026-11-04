#include<stdio.h>
double function(int n);
int main() {
int n;
scanf("%d",&n);
printf("%f\n",function(n));
return 0;
}
double function(int n)
{

	double res=1.0;
	for(int i=1;i<n;i++)
	{
		 res=1.0/(1.0+res);
	} 
	return res;
} 

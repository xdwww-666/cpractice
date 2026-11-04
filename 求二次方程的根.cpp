#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x;
	scanf("%f %f %f",&a,&b,&c);
	float k=b*b-4.0*a*c;
	float dert=sqrt(b*b-4.0*a*c);
	float x1=(-b+dert)/(2.0*a),x2=(-b-dert)/(2.0*a);
	if(k<0)
	{
		printf("no");
	}
	else if(dert==0)
	{
		printf("%.1f",x1);
	}
	else
	{
		printf("%.1f %.1f",x1,x2);
	}
	return 0;
}

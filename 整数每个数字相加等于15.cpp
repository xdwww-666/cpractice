#include<stdio.h>
int main()
{   
	for(int i=1;i<1000;i++)
	{
		int ge=i%10;
		int shi=(i/10)%10;
		int bai=i/100;
		int num=ge+shi+bai;
		if(num==15)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

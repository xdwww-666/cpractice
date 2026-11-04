#include<stdio.h>
void exchange(int* num1,int* num2);
int main()
{
	int a;
	int b;
	scanf("%d ",&a);
	scanf("%d",&b);
	printf("%d %d\n",a,b);
	exchange(&a,&b);
	printf("%d %d",a,b);
	return 0;
}

void exchange(int* num1,int* num2)
{
	int temp=*num1;
        *num1=*num2;
        *num2=temp;
}

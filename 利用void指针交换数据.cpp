#include<stdio.h>
void swap(void* num1,void* num2,int len);
int main()
{   
    long long a;
    long long b;
    printf("a="); 
    scanf("%lld",&a);
    printf("b=");
    scanf("%lld",&b);
    swap(&a,&b,8);
    printf("交换后a=%lld,b=%lld",a,b);
	return 0;
}
void swap(void* num1,void* num2,int len)
{
	char* p1=(char*)num1;
	char* p2=(char*)num2;
	char temp=0;
	for(int i=0;i<len;i++)
	{
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		p1++;
		p2++;
    }
}

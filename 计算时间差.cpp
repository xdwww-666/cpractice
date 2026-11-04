#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int k=c-a;
    int t=d-b;
    if(t>=0)
    {
        printf("%d %d",k,t);
    }
    else
    {
        printf("%d %d",k-1,60+t);
    }
    return 0;
}

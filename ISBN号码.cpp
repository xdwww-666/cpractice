#include<stdio.h>
int main()
{
    char str[20];
    if(scanf("%s",str)!=1){return 0;}
    int n=0,sum=0;
    for(int i=0;i<12;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            n++;
            sum+=(str[i]-'0')*n;
        }
    }
    int k=sum%11;
    char c=k+'0';
    if(k==10)
    {
        c='X';
    }
    if(c==str[12])
    {
        printf("Right");
    }
    else
    {
        str[12]=c;
        printf("%s",str);
    }
    return 0; 
}

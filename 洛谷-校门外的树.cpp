#include<stdio.h>
int main()
{
    int m,l;
    scanf("%d %d",&l,&m);
    int arr1[10001]={0},arr2[200];
    for(int i=0;i<m*2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int j=0;j<m*2;j+=2)
    {
        for(int k=arr2[j];k<=arr2[j+1];k++)
        {
               arr1[k]=1;
        }
    }
    int num=0;
    for(int i=0;i<=l;i++)
    {
        if(arr1[i]==0)
        {
            num++;
        }
    }
    printf("%d",num);
}

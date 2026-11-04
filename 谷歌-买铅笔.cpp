#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[3];
    for(int k=0;k<3;k++)
    {
        double temp=(double)n/arr[k][0];//也可以用这个公式：int temp=(n+arr[k][0]-1)/arr[k][1]; 
        int temp2=ceil(temp);
        arr2[k]=temp2*arr[k][1];
    }
    int min=arr2[0];
    for(int i=0;i<3;i++)
    {
        if(arr2[i]<min)
        {
            min=arr2[i];
        }
    }
    printf("%d",min);
    return 0; 
}

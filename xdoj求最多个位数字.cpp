#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[10000];
	int count=0;
	for(int i=0;i<N;i++)
	{
		int x;
		scanf("%d",&x);
		do
		{
			int a=x%10;
			arr[count]=a;
			count++;
			x/=10; 
		}while(x!=0); 
	}
	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int max=1,len=1;
	int arr2[10]; 
	int count2=0;
	for(int i=0;i<count;i++)
	{
		if (i == count - 1 || arr[i] != arr[i + 1])
        {
            if (len > max)
            {
                max = len;
                count2 = 0;           
                arr2[count2++] = arr[i];
            }
            else if (len == max)
            {
                arr2[count2++] = arr[i]; 
            }

            len = 1; 
        }
        else
        {
            len++;
        }
	}
	printf("%d:", max);
    for (int i = 0; i < count2; i++)
    {
        printf(" %d", arr2[i]);
    }
    printf("\n");
    return 0;
} 

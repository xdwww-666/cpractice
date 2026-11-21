#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<m;i++)
	{
		int arr1[100]={0};
		for(int j=0;j<n;j++)
		{
			if(j==0&&arr[i][0]==1)
			{
				arr1[0]=1;
				int k=1; 
				while(k<n&&arr[i][k]==1)
				{
					arr1[0]++;
					k++;
				}
			}
			if(j!=0)
			{
				if(arr[i][j-1]==0&&arr[i][j]==1)
				{
					arr1[j]=1;
					int k=1;
					while(j+k<n&&arr[i][j+k]==1)
					{
						arr1[j]++;
						k++;
					}
				}
			}
			
  		}
  		int count1=0;
  		for(int i=0;i<n;i++)
  		{
  			if(arr1[i]!=0)
  			{
  				count1++;
			}
		}
		if(count1==0)
		{
			printf("-1 -1\n");
		}
  		else
		{
			int max=arr1[0];
	  		int count=0;
	  		for(int i=0;i<n;i++)
	  		{
	  			if(arr1[i]>max)
	  			{
	  				max=arr1[i];
	  				count=i;
				}
			}
			printf("%d %d\n",count,count+max-1);	
		}
	}
	return 0;
}
//#include <stdio.h>
//
//int main(void)
//{
//    int m, n;
//    scanf("%d %d", &m, &n);
//
//    for (int i = 0; i < m; i++)
//    {
//        int len = 0, max = 0;
//        int start = -1, end = -1;
//
//        for (int j = 0; j < n; j++)
//        {
//            int x;
//            scanf("%d", &x);
//
//            if (x == 1)
//            {
//                len++;
//
//                if (len > max)
//                {
//                    max = len;
//                    start = j - len + 1;
//                    end = j;
//                }
//            }
//            else
//            {
//                len = 0;
//            }
//        }
//
//        printf("%d %d\n", start, end);
//    }
//
//    return 0;
//}

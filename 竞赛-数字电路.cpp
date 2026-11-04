#include<stdio.h>
int judge1(int A,int B,int C);
int arr1[10001];
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
    	scanf("%d",&arr1[i]);
	}
	for(int i=0;i<m;i++)
	{
		int arr3[3]={0};
		for(int j=0;j<3;j++)
		{
			int large;
			scanf("%d",&large);
			for(int k=0;k<large;k++)
			{
				int p;
				scanf("%d",&p);
				if(arr3[j]!=arr1[p])
				{
					arr3[j]=1;
				}
				else
				{
					arr3[j]=0;
				}
			}
		}
		int res;
		scanf("%d",&res);
		int res1=judge1(arr3[0], arr3[1], arr3[2]);
		if(res1==res)printf("correct\n");
		else{printf("wrong\n");}
	} 
	return 0;
}
int judge1(int A,int B,int C)
{
	int Y;
	int temp1,temp2,temp3;
	if(A!=B)temp1=1;
	else{temp1=0;};
	if(C==1)temp3=0;
	else{temp3=1;};
	if(A!=temp3)temp2=1;
	else{temp2=0;};
	if(temp1==1&&temp2==1)Y=1;
	else{Y=0;};
	return Y;
}


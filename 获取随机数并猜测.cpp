//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	srand(time(NULL));
//	int num=rand()%100+1;
//	printf("%d\n",num);
//	for(int i=1;i<=100;i++)
//	{
//		if(i==num)
//		{
//			printf("生成的随机数是：%d",i);
//		}
//	}
//	return 0; 
//}

#include<stdio.h>
#include<time.h> 
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int num=rand()%100+1;
	int guess;
	while(1)
	{
		printf("请输入您猜测的结果：");
		scanf("%d",&guess);
		if(guess>num)
		{
			printf("大了\n"); 
		}
		else if(guess<num)
		{
			printf("小了\n"); 
		}
		else 
		{
			printf("中了");
			break; 
		} 
	}
	return 0;
}













#include<stdio.h>
int main()
{
	int day;
	int AQI;
	int num;
	scanf("%d %d %d",&day,&AQI,&num);
	int wei=num%10;
	printf("%d ",wei);
	if(day==6||day==7||AQI<200)
	{
		printf("no");
	} 
	else
	{ 
	    if(AQI>=200&&AQI<400)
	    {
		    switch(day)
		   {
			case 1:
				if(wei==1||wei==6)
				{
					printf("yes");
				}
				else
				{
					printf("no");
				}break;
			case 2:
				if(wei==2||wei==7)
				{
					printf("yes");
				}
				else
				{
					printf("no");
				}break;
			case 3:
				if(wei==3||wei==8)
				{
					printf("yes");
				}
				else
				{
					printf("no");
				}break;
			case 4:
				if(wei==4||wei==9)
				{
					printf("yes");
				}
				else
				{
					printf("no");
				}break;
			case 5:
				if(wei==5||wei==0)
				{
					printf("yes");
				}
				else
				{
					printf("no");
				}break;
		   }
	   }
	    else
	   {
		  if(day==1||day==3||day==5)
		 {
			if(wei==1||wei==3||wei==5||wei==7||wei==9)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}
		 }
		  else
		 {
			if(wei==2||wei==4||wei==6||wei==8||wei==0)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}
		 }
	   }
    }
	return 0; 
}

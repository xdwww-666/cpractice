#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[100];
	int j=1;
	if(n<0)
	{
		str[0]='-';
		n=-n;
		while(1)
	 {
	    int a=n%10;
	    str[j]=a+'0';
		n/=10;
		j++;
		if(n==0)
		{
			break;
		}	
	 }
	}
	else if(n==0)
	{
		str[0]='0';
	}
	else
	{
		str[0]=n%10+'0';	
	    n=n/10;
	    while(1)
	 {
	    int a=n%10;
	    str[j]=a+'0';
		n/=10;
		j++;
		if(n==0)
		{
			break;
		}	
	 }
    }
	str[j]='\0';
    if(str[0]=='-')
    {
	   printf("%c",str[0]);
	   for(int i=1;i<=j-1;i++)
	   {
		  printf("%c",str[j-i]);
	   }
    }
	else
	{
		 for(int k=1;k<=j;k++)
	   {
		  printf("%c",str[j-k]);
	   }
	}
}

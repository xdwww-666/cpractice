#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  int ge=num%10;
  int shi=num/10%10;
  int bai=num/100;
  int sum=ge+shi+bai;
  printf("%d",sum);
  return 0;
} 

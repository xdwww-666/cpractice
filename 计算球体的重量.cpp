#include<stdio.h>
int main()
{
	int Iron;
	int Gold;
	printf("铁球的直径(mm)：");
	scanf("%d",&Iron);
	printf("金球的直径(mm)：");
	scanf("%d",&Gold);
	float pi=3.1415926;
	float Viron=(Iron/20)*(Iron/20)*(Iron/20)*(4.0/3.0*pi);
	float Vgold=(Gold/20)*(Gold/20)*(Gold/20)*(4.0/3.0*pi);
	float Miron=Viron*7.86;
	float Mgold=Vgold*19.3;
	printf("%.3f %.3f",Miron,Mgold);
	return 0;
}

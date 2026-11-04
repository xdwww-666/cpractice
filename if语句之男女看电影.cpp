#include<stdio.h>
int main(){
	int pai_girl,lie_girl;
	int pai_boy,lie_boy;
	printf("请输入女孩的排与列：");
	scanf("%d %d",&pai_girl,&lie_girl);
	printf("请输入男孩的排与列：");	
	scanf("%d %d",&pai_boy,&lie_boy);
	int lie_girl2=lie_girl+1,lie_girl3=lie_girl-1;
	if(pai_boy==pai_girl&&(lie_boy==lie_girl2||lie_boy==lie_girl3))
    {
    	printf("男孩高兴了！"); 
	}
	else
	{
		printf("男孩失望了！"); 
	}
    return 0;
}

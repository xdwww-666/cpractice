#include<iostream>
using namespace std;
//设计一个圆类，求圆的周长//类和属性称为成员
const double PI=3.14;
//class代表类，后接名称
class circle
{
	//访问权限
	//公共权限
  public:
  //属性  即成员属性 成员变量
  //半径
     int r;
  //行为   成员函数 成员方法
  //获取周长
     double C()
	 {
		 return 2*PI*r; 
	 }
};
int main()
{
	//通过圆类 创建具体的圆（对象）
	//实例化 
	circle c1;
	c1.r=10;
	cout<<"圆的周长为："<<c1.C()<<endl;
	system("pause");
}
//public  公共权限     类内外都可访问
//protected 保护权限   内可外不可  儿可访问父
//private  私有权限    内可外不可  儿不可访问父

//struct默认权限为共有，class默认权限是私有，其他方面没有区别
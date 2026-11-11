#include<iostream>
using namespace std;
class Person
{
public:
    int age;
	Person()
	{
		cout<<"Persion的无参函数调用"<<endl;
		
	}
	Person(int a)
	{
		age=a;
		cout<<"Person的有参构造函数的调用"<<endl;
	}
	//拷贝构造函数
	Person( const Person &p)
	{
        //将传入的人的身上的所有属性，拷贝到我身上
		age=p.age;
	}
};
//调用
void test01()
{
	// //1.括号法
	// Person p1;//默认构造函数的调用
	// Person p2(10);//有参构造函数
	// Person p3(p2);//拷贝构造函数
	// //注意：使用默认构造函数时，不要加（）;
	// cout<<"p2的年龄为："<<p2.age<<endl;
	// cout<<"p3的年龄为："<<p3.age<<endl;
	// //2.显示法
	// Person p1;
	// Person p2=Person(10);
	// Person p3=Person(p2);
	//3.隐式转换法
	Person p4=10;
	Person p5=p4;
};
int main()
{
    test01();
    system("pause");
}
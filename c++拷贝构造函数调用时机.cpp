#include<iostream>
using namespace std;
//1.使用一个已经创建完毕的对象来初始化一个新对象
class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}
    Person(int age)
	{
		cout<<"Person有参构造函数调用"<<endl;
		m_age=age;
	}
	Person(const Person &p)
	{
		cout<<"Person拷贝构造函数调用"<<endl;
		m_age=p.m_age;
	}
	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
	int m_age;
};
//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);
    cout<<"p2的年龄是:"<<p2.m_age<<endl;
}
//
int main()
{
	test01();
	system("pausee");
}

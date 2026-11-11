#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    //设置姓名
	void setname(string name1)
	{
		name=name1;
	}
	//获取姓名
	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}
	void setIdol(string Idol1)
	{
		Idol=Idol1;
	}
private:
	string name;//可读可写
	int age=18;//只读
	string Idol;//只写
};
int main()
{
	Person p1;
	p1.setname("张三");
	cout<<"姓名："<<p1.getname()<<endl;
	cout<<"年龄："<<p1.getage()<<endl;
	system("pause");
	
}
//若年龄可读可写，且有限制条件，年龄大于0小于120；
// void setage(int age1)
// {
// 	if(age1<0||age>120)
// 	{
// 		cout<<"年龄输入有误"<<endl;
// 		return;
// 	}
// 	age=age1;
// }
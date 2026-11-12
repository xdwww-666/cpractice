#include<iostream>
using namespace std;
#include<string>
// 函数原型：
// - string substr(int pos = 0, int n = npos) const;   //返回由pos开始的n个字符组成的字符串

void test01()
{   
	string str="abcdef";
	string str1=str.substr(1,3);
	cout<<str1<<endl;
};
void test02()
{
	string email="zhangsan@163.com";
	int pos=email.find('@');
	string str2=email.substr(0,pos);
	cout<<str2<<endl;
}
int main()
{
	test01();
	test02();
	system("pause");
}
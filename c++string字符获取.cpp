#include<iostream>
using namespace std;
// string中单个字符存取方式有两种

// - char& operator[](int n);     //通过[]方式获取字符
// - char& at(int n);             //通过at方法获取字符

#include<string>
void test01()
{
	string str1="hello";
	for(int i=0;i<str1.size();i++)
    {
		cout<<str1.at(i)<<" ";//=str[i]
	}
    str1.at(1)='r';//修改
};
int main()
{
	test01();
	system("pause");
}
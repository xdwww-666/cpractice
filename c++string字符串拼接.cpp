#include<iostream>
using namespace std;
#include<string>
// 函数原型：
// - string& operator+=(const char* str);			//重载+=操作符
// - string& operator+=(const char c);				//重载+=操作符
// - string& operator+=(const string& str);		//重载+=操作符
// - string& append(const char *s);				//把字符串s连接到当前字符串结尾
// - string& append(const char *s, int n);			//把字符串s的前n个字符连接到当前字符串结尾
// - string& append(const string &s);				//同operator+=(const string& str)
// - string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾
void test01()
{
	string str1="a";
	str1+="bc";
	cout<<"str1="<<str1<<endl;
	string str2="a";
	str2+='b';
	cout<<"str2="<<str2<<endl;
	string str3="mn";
	str3+=str1+str2;
	cout<<"str3="<<str3<<endl;
	string str4="abc";
	str4.append("def");
	cout<<"str4="<<str4<<endl;
	string str5="asdf";
	str5.append("qweerwert",5);
	cout<<"str5="<<str5<<endl;
	string str6;
	cout<<"str6="<<str6<<endl;
	string str7="aaa";
	str7.append(str5,1,2);
	cout<<"str7="<<str7<<endl;
};
int main()
{
	test01();
	system("pause");
}
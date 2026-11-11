#include<iostream>
using namespace std;
#include<string>
class MyPrint
{
	public:
	void operator()(string s)
	{
		cout<<s<<endl;
	};
};
void test01()
{
	MyPrint myprint;
	myprint("hello c++");
};
int main()
{
	test01();
	system("pause");
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Person
{
	public:
	string m_name;
	int m_age;
	Person(string name,int age)
	{
		this->m_name=name;
		this->m_age=age;
	}

};
void test01()
{
	vector<Person>v;
	Person p1("aaa",10);
	Person p2("aaa",20);
	Person p3("aaa",30);
	Person p4("aaa",40);
	Person p5("aaa",50);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<"姓名："<<(*it).m_name<<"年龄："<<(*it).m_age<<endl;
         //也可以写成it-> m_name;
	}
};
int main()
{
    test01();
	system("pause");
}
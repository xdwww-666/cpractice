#include<iostream>
using namespace std;
#include<string>
class Student
{
public:
    string name;
	int ID;
	void show()
	{
		cout<<"姓名；"<<name<<endl;
		cout<<"学号："<<ID<<endl;
	}
	void setname(string name1)//函数赋值  
	{
		name=name1;
	}

};
int main()
{
	Student s1;
	Student s2;
	// s1.name="张三";
	s1.setname("张三");
	s1.ID=6666;
	s1.show();
	s2.name="李四";
	s2.ID=6666;
	s2.show();
	system("pause");
}

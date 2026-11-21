#include<iostream>
using namespace std;
#include<vector>
// 函数原型：
// - push_back(ele);                                    //尾部插入元素ele
// - pop_back();                                        //删除最后一个元素
// - insert(const_iterator pos, ele);                   //迭代器指向位置pos插入元素ele
// - insert(const_iterator pos, int count,ele);         //迭代器指向位置pos插入count个元素ele
// - erase(const_iterator pos);                         //删除迭代器指向的元素
// - erase(const_iterator start, const_iterator end);   //删除迭代器从start到end之间的元素
// - clear();
void printfVector(vector<int>&v)
{
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
void test01()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printfVector(v1);
	v1.pop_back();
	printfVector(v1);
	v1.insert(v1.begin(),100);
	printfVector(v1);
	v1.insert(v1.begin(),2,1000);
	printfVector(v1);
	v1.erase(v1.begin());
	printfVector(v1);
	v1.erase(v1.begin(),v1.end());
	printfVector(v1);
	v1.clear();
	printfVector(v1);
}
int main()
{
	test01();
	system("pause");
}
#include<iostream>
using namespace std;
#include<vector>
// 函数原型：
// - swap(vector &v); //交换两个容器的元素
void printfVector(vector<int>&v)
{
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{						
		cout<<*it<<" ";
	}			
	cout<<endl;
};
void test01()
{
	vector<int>v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	vector<int>v2;
	for(int i=10;i<20;i++)
	{
		v2.push_back(i);
	}
	cout<<"交换前："<<endl;
	printfVector(v1);
	printfVector(v2);
	v1.swap(v2);
	cout<<"交换后："<<endl;
	printfVector(v1);
	printfVector(v2);
};
//实际用途
//用swap可以收缩内存空间
void test02()
{
	vector<int>v;
	for(int i=0;i<100000;i++)
	{
		v.push_back(i);
	}
	cout<<"v的容量为："<<v.capacity()<<endl;
	cout<<"v的大小为："<<v.size()<<endl;
	v.resize(3);//重新指定大小
	cout<<"v的容量为："<<v.capacity()<<endl;
	cout<<"v的大小为："<<v.size()<<endl;
	vector<int>(v).swap(v); //匿名对象和swap结合可以收缩内存空间
	cout<<"v的容量为："<<v.capacity()<<endl;
	cout<<"v的大小为："<<v.size()<<endl;
};
int main()	
{
	test01();
	test02();
	system("pause");
}
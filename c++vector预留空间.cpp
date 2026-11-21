#include<iostream>
using namespace std;
#include<vector>
// 函数原型：
//resrver(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问
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
	vector<int>v;
	int num=0;
	int *p=NULL;
	v.reserve(100000);//预留100000个元素长度
	for(int i=0;i<100000;i++)
	{
		v.push_back(i);
		if(p!=&v[0])//如果容器扩容，重新开辟内存空间，原来的空间不再使用
		{
			p=&v[0];
			num++;
		}
	}
	cout<<"num="<<num<<endl;
	cout<<"v的容量为："<<v.capacity()<<endl;
	v.reserve(100000);//预留100000个元素长度
	cout<<"v的容量为："<<v.capacity()<<endl;
	for(int i=0;i<100000;i++)
	{
		v.push_back(i);
	}
	cout<<"v的容量为："<<v.capacity()<<endl;
	cout<<"v的大小为："<<v.size()<<endl;
};
int main()
{
	test01();
	system("pause");
}
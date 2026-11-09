#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//标准算法头文件
void print(int a)
{
	cout<<a<<endl;
}
void bianli()
{
	vector<int>arr1;
	arr1.push_back(1);
	arr1.push_back(2);
	arr1.push_back(3);
	arr1.push_back(4);
	// vector<int>::iterator itbegin=arr1.begin();
	// vector<int>::iterator itend=arr1.end();//结束迭代器，指向容器中最后一个元素的下一个位置
	// while(itbegin!=itend)
	// {
	// 	cout<<*itbegin<<endl;
	//     itbegin++;
	// }
	//第二种
	// for(vector<int>::iterator it=arr1.begin();it!=arr1.end();it++)
	// {
	// 	cout<<*it<<endl;
	// }
	//第三种利用最后一个算法函数库
    for_each(arr1.begin(),arr1.end(),print);


}
int main()
{
	bianli();
	return 0;
}
 
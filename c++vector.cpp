#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	int num=0;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<(i+1==(int)a.size()?'\n':' ');
        num+=a[i];
	}
	cout<<num;
    return 0;
}
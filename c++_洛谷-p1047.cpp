#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int l,m;
	cin>>l>>m;
	vector<int>arr1(l+1);
	vector<int>arr2(2*m);
	for(int i=0;i<2*m;++i)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<2*m;i+=2)
	{
		for(int j=arr2[i];j<=arr2[i+1];j++)
		{
			arr1[j]=1;
		}
	}
	int num=0;
	for(int i=0;i<=l;++i)
	{
		if(arr1[i]==0)
		{
			num++;
		}
	}
	cout<<num;
	return 0;
}
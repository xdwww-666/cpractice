#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
	long long m,n;
	cin>>m>>n;
	vector<int>a1(m);
	for(int &x:a1)
	{
		cin>>x;
	}
	vector<int>a2(n);
	for(int &x:a2)
	{
		cin>>x;
	}
	sort(a1.begin(),a1.end());
	long long sum1=0;
	for(int b:a2)
	{
		auto r=lower_bound(a1.begin(),a1.end(),b);
		if(r-a1.begin()==0)
		{
			sum1+=*r-b;
		}
		else if(r==a1.end())
		{
			sum1+=b-*(r-1);
		}
		else sum1+=min(*r-b,b-*(r-1));
	}
	cout<<sum1;
	return 0;
}
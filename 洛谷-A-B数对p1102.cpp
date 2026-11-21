#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
int main()
{
	long long N,C;
	cin>>N>>C;
    vector<long long>a(N);
	for(long long &x:a)
	{
		cin>>x;
	}
	sort(a.begin(),a.end());
	long long ans=0;
    for(long long b:a)
	{
		long long target=b+C;
		auto l=lower_bound(a.begin(),a.end(),target);
		auto r=upper_bound(a.begin(),a.end(),target);
		ans+=r-l;
	}
	cout<<ans<<endl;
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
long long check(vector<long long>&v,long long mid)
{
	long long cnt=1;
	long long sum=0;
	for(long long x:v)
	{
		sum+=x;
		if(sum>mid)
		{
			sum=x;
			++cnt;
		}
	}
    return cnt;
};
int main()
{
	long long N,M;
	cin>>N>>M;
	vector<long long>a1(N);
	long long r=0;
	long long l=0;
	for(long long &x:a1)
	{
		cin>>x;
		r+=x;
        l=max(x,l);
	}
    while(l<r)
	{
		long long mid=l+(r-l)/2;
		long long k=check(a1,mid);
		if(k<=M) r=mid;
		else l=mid+1;
	}
	cout<<l;
	return 0;
}
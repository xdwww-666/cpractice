#include<iostream>
using namespace std;
#include<vector>
int main()
{
	long long n,m;
	cin>>n>>m;
	vector<long long>arr(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	vector<long long>arr2(m);
	for(long long &a:arr2)
	{
		cin>>a;
	}
	for(int i=0;i<m;i++)
	{
		
		int l=1,r=n;
		while(l<r)
		{
			long long mid=l+(r-l)/2;
			if(arr[mid]>=arr2[i])r=mid;
			else l=mid+1;
		}
        if(arr[l]!=arr2[i])cout<<-1<<" ";
		else cout<<l<<" ";
	}
	return 0;
}
#include<iostream>
using namespace std;
void exchange(int &m,int &n)
{
    int temp=m;
	m=n;
	n=temp;
}
int main()
{
     int a,b;
	 cin>>a>>b;
	 exchange(a,b);
	 cout<<a<<" "<<b<<endl;
	 return 0;
}
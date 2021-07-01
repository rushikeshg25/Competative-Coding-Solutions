#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



ll solve()
{
	ll n,i,minn=0x3f3f3f3f;
	ll cnt=0;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		minn=min(minn,a[i]);
	}
	for(i=0;i<n;++i)
	{
    if(a[i]!=minn)
    {
    	cnt++;
    }

	}
	cout<<cnt<<endl;



}
int main()
{
	ll t;
	cin>>t;
	while(t--)solve();
	return 0;
}

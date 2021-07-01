#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F ff
#define S ss
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;

    int a[n];
    ll i=0,sum=0;
    while(i<n)
    {
    	cin>>a[i];
    	i++;
    }
    sort(a,a+n);


    if(a[0]>=0)
    {
    	cout<<"0";
    }
    else
    {

    	for(i=0;i<m;i++)
    	{
    		if(a[i]>=0)
    		{
    			break;
    		}
         sum=sum+a[i];
    	}
    	cout<<abs(sum);
    }
    return 0;
}

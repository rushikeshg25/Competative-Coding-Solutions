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

int solve(int x)
{
	for(ll i=1;i<=x+1;i++)
	{
    if(x%i!=0)
    {
    	return  i;
    	break;
     }
    }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c=1;
        if(n>1000000007)
        {
        	n=n%1000000007;
        	c=0;
        }
        int sum=0;
        for(ll i=1;i<=n;i++)
        {
        	sum=sum+solve(i);
        }
        if(c==0)
        {
        	cout<<sum<<endl;
        }
        else{
        cout<<sum%1000000007<<endl;
    }

       
    }
    return 0;
}

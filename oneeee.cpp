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
    int t;
    cin >> t;
    while (t--) {
        ll n,a,b;
        cin >> n>>a>>b;
        bool c=false;
        
        if(n%a==0)
        {
        	cout<<"Yes"<<endl;
            c=true;

        }
        else if(n%(a+b)==0)
        {
            cout<<"Yes"<<endl;
            c=true;
        }
        else if(c==false)
        {
        for(ll i=1;i<=n;i=i+b)
        {
        	if(i==n)
        	{
        		cout<<"Yes"<<endl;
        		
        	}
        }
    }
    else{
        cout<<"No"<<endl;
    }

        
    }
    return 0;
}


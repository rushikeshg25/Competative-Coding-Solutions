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
    int n,e(0),o(0),le(0),lo(0);
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    if(x%2==0)
    {
    	le=i;
    	e++;
    }
    else{
    	o++;
    	lo=i;
    }

    }

    if(o==1)
    {
    	cout<<lo+1<<endl;
    }
    else
    {
    	cout<<le+1<<endl;
    }
    return 0;
}

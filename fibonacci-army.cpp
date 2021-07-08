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
    int n;
    cin >> n;
    int a[n+2];
    a[0]=1;
    a[1]=1;

    for(int i=2;i<=n;i++)
    {
    	a[i]=a[i-1]+a[i-2];
    }

    cout<<a[n];
    

    
    return 0;
}

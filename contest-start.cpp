#include "bits/stdc++.h"
using namespace std;


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
        int n;
        int x;
        int t;
        cin >> n>>x>>t;
        cout<<max(0,n−t/x)*t/x+min(n−1,t/x−1)*min(n,t/x)/2<<endl;
    }
    return 0;
}

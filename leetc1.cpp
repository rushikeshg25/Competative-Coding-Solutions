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
        int n;
        bool c=true;
        cin >> n;
        ll a[n];
        FOR(i, n)
        cin >> a[i];
       
       ll b[n];
       FOR(i, n)
       b[i]=a[i];

       sort(b,b+n);

       FOR(i, n)
       {
       	if(a[i]!=b[i])
       	{
       		c=false;
       		break;
       	}
       }
         if(c==false)
       {
cout<<"false"<<endl;
       }
        else
        {
cout<<"true"<<endl;
        }

    return 0;
}
}

// 1 2 3 4 5 6 
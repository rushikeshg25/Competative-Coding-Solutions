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
        int n,j;
        bool c=true;
        cin >> n;
        int  a[n];
        FOR(i, n)
        cin >> a[i];

        if(n==1)
        {
        	cout<<"0"<<endl;
        }
        else if(n==2)
        {
        	if(a[0]^a[1]>0)
        		{
        			cout<<"0"<<endl;
        		}
        		else
        		{
        			cout<<"-1"<<endl;
        		}
        }
        else
        {
        	for(j=1;j<n-1;j++)
        	{
             if(a[j-1]^a[j]^a[j+1]!=a[j])
             {
              c=false;
             }
        	}
        }
    }
    return 0;
}

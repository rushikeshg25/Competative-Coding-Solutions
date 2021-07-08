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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int kk=0,ll=0,mm=0,nn=0;

    for(int i=1;i<=d;i++)
    {
        if(i%k==0) 
            kk++;
        else if(i%l==0) 
            ll++;
        else if(i%m==0) 
            mm++;
        else if(i%n==0) 
            nn++;
    }
    cout<<kk+ll+mm+nn;
    return 0;
}

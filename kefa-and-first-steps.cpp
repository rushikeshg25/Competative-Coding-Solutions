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
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i,x=1,maxx=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    if(n==1)
    {
    	cout<<"1";
    }
    else{
    for(i=1;i<n;i++)
    {
      if(a[i]>=a[i-1])
      {
       x++;
      }
      else
      {
      	
      	x=1;
      }
      maxx=max(maxx,x);

    }
    cout<<maxx;
    return 0;
}
}
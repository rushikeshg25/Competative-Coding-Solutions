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
typedef pair<int, int> pi;
#define F ff
#define S ss
#define PB push_back
#define POB pop_back
#define MP make_pair
vector<int> a;
int card()
{
  int x;
  x=max(a[0],a[a.size()-1]);
  if(x==a[0])
  {
  a.erase(a.begin());
  }
  else
  {
  	a.erase(a.end());
  }

  return x;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
        int n,k;
        cin >> n;
        
        
        for(int i=0;i<n;i++)
        {
        cin >> k;
        a.push_back(k);
        }
        int s=0;
        int d=0;

        for(int i=1;i<=n;i++)
        {
        	if(i%2==0)
        	{
        		d=d+card();

        	}
        	else
        	{
        		s=s+card();
        	}
        }
        cout<<s<<" "<<d<<endl;

    return 0;
}

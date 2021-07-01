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
    int s,n,i,j,k;
    bool c=true;
    cin>>s>>n;
    pair<int,int> a[1000];
    for(i=0;i<n;i++)
    {
    	cin>>a[i].F>>a[i].S;
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
      if(s<=a[i].F){
      	
      	c=false;
      	break;
      }
      else
      {
      	s=s+a[i].S;
      }

    }
   
if(c==true)
{
	cout<<"YES";
}
else
{


    cout<<"NO";
}
}


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
    vector<int>a;
    FOR(i,n)
    cin>>a[i];
   int start,end=0;
   start=-1;
   bool c=true;

   for(int i=1;i<n;i++)
   {
    if(a[i-1]>a[i])
    {
      start=i-1;
      c=false;
      for(int j=start;j<n-1;j++)
      {
        if(a[j]<a[j+1])
        {
         end=j;
         break;
        }
      }
      break;
    }
   }
   if(c==true)
   {
    cout<<"yes"<<"1"<<" "<<"1";
   }
   else
   {
    c==true;
    reverse(a.begin()+start,a.end()+end+1);
   
    for(int i=1;i<n;i++)
   {
    if(a[i-1]>a[i])
    {
      
      c=false;
      

  }
}
}
if(c==true)
{
    cout<<"yes"<<a[start]<<" "<<a[end];
}
else
{
    cout<<"no";
}
   
    
    return 0;
}



//1  4  3  2  5 
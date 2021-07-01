#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 1; (a) < (c); (a)++)
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
        int n,temp,temp2;
        cin >> n;
        ll a[n+1];
        for(int i=1;i<n+1;i++)
        {
        	a[i]=i;
        }

        if(n==2)
        {
          cout<<a[2]<<" "<<a[1]<<endl;
        }
        else if(n==3)
        {
        	cout<<a[3]<<" "<<a[1]<<" "<<a[2]<<endl;
        }
        else
        {
        	if(n%2==0)
        	{
        		for(int i=1;i<n+1;i+=2)
        		{
                 temp=a[i];
                 a[i]=a[i+1];
                 a[i+1]=temp;
        		}
        	}
        	
        	else
        	{
              for(int i=1;i<n-2;i+=2)
        		{
                 temp=a[i];
                 a[i]=a[i+1];
                 a[i+1]=temp;
        		}
        		temp=a[n-2];
        		a[n-2]=a[n];
        		temp2=a[n-1];
        		a[n-1]=temp;
        		a[n]=temp2;
        	}
        	for(int i=1;i<n+1;i++)
        {
        	cout<<a[i]<<" ";
        }
        }
    }

    return 0;
}

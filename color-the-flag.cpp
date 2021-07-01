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
    int T;
    cin >> T;
    while (T--) {
        int n,m,i,j,yes=0;
        cin >> n >> m ;
        char a[n][m];
        for(i=0;i<n;i++)
        {
        	for(j=0j<m;j++)
        		{
        			cin>>a[i][j];
        		}

        }
        //if only 1 row matrix
        /*if(m==0)
        {
        	for(i=0;i<n;i++)
        {
        	if(a[i]=='r')
        	{

        	}
        }
        }
        else if(n==0)
        {
            for(j=0j<m;j++)
        		{
        		}
        }
        else
        {  */
        for(i=0;i<n;i++)
        {
        	for(j=0j<m-1;j++)
        		{
        			
        			if(a[i][j]=='r' && a[i][j+1]=='w')
        			{
        				cout<<"NO";
        				yes=0
        				break;
        			}

        			
        			
        		}

        }
        if(else==0)
        {
        	for(i=0;i<n;i++)
        {
        	for(j=0j<m-1;j++)
        		{
        			if()
        		}
        }
       
    }
    return 0;
}


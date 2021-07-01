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
    
    	int n,i,j;
    	int sumi=0,sumj=0,sumk=0;
        cin>>n;
        int a[n][3];
        for(i=0;i<n;i++)
        {
        	for(j=0;j<3;j++)
        	{
        		cin>>a[i][j];
        	}
        }
        for(j=0;j<3;j++)
        {
        	for(i=0;i<n;i++)
        	{
        		
        		if(j==0)
        		{
        			sumi=sumi+a[i][j];
        		}
        		else if(j==1)
        		{
                     sumj=sumj+a[i][j];
        		}
        		else{
                      sumk=sumk+a[i][j];
        		} 
        	}
        }
       
        if(sumj==0 && sumi==0 && sumk==0)
        {
        	cout<<"YES"<<endl;
        }
        else
        {
        	cout<<"NO"<<endl;
        }
    
    return 0;
}

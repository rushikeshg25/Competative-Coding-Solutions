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
        int k,x,i,j;
        bool c=true;
        cin>>k;
        int sum=0,mul=1;
        if(k==1)
        {
        	cout<<"1"<<endl;
        }
        else
        {
        for( i=pow(10,k-1)+1;i<pow(10,k);i++)
        {

           for( j=i;j>0;j=j/10)
        {

        	x=j%10;
        	if(x==0)
        	{
        		break;
        		c=false;
        	}
        	else
        	{
        	sum=sum+x;
        	mul=mul*x;
        	}
        }
        if(c==true)
        {


        if(mul>=sum)
        {
        	cout<<i<<endl;
        	break;
        }
    }
       
        }
    }

        }
    return 0;
}

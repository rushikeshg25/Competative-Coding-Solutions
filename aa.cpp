#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    
    ll t;
    cin >> t;
    while (t--) {
        ll n,i,x,sum=0;
        cin >> n;
        
        for(i=0;i<n;i++)
        {
        	cin>>x;
        	
        	sum=sum+x;
        }
        if(sum==n)
        {
        	cout<<"0"<<endl;
        }
        else if(sum==0 && n!=0)
        {
        	cout<<n+1<<endl;
        }
        else if(sum>n)
        {
        	cout<<sum-n<<endl;
        }
        else if(sum<0)
        {
           cout<<"1"<<endl;
        }
        else
        {
        	cout<<"1"<<endl;
        }
    }
    return 0;
}

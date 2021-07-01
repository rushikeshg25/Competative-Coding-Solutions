#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k,minn = 0x3f3f3f3f;
		cin>>n;
		string a;
		cin>>a;

		
        for(int i=0;i<n;i++)
       {
        if(a[i]=='8')
        {
         k=i;
         minn=min(minn,k);

        }

        }
        if(minn+11<=n)
        {
        	cout<<"YES"<<endl;
        }
        else if(n<11)
       {
        cout<<"NO"<<endl;
        }
        else
        {
        	cout<<"NO"<<endl;
        }
	}
}
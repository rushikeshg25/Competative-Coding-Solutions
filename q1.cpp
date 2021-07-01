#include<bits/stdc++.h>
using namespace std;

int solve()
{
	int n,i,j,k,flag;
	flag=0;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=j;k<n;k++)
			{
				if(a[i]==a[j]-a[k])
				{
					flag=1;
				}
				else{
					a.push_back(a[j]-a[k]);

				}
			}
		}
	}
	cout<<"YES";
	cout<<a.size();
	


}

int main()
{
	int t;
	cin>>t;
	while(t--)solve();
}
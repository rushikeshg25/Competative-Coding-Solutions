#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0;
		cin>>n;
		sum=n*(n+1)/2;
		for(int i=1;i<=n;i=i*2)
		{
			sum=sum-i;

		}
		cout<<sum<<endl;
}
}
#include <bits/stdc++.h>
using namespace std;


int solve()
{
	int n,j,minn,maxx,step=0;
	cin>>n;
	int a[n];
	int mid=(n-1)/2;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			minn=i;
		}
		else if(a[i]==n)
		{
			maxx=i;
		}
	}
	if(maxx<=mid && minn<=mid)
	{
		cout<<max(maxx,mid)+1<<endl;
	}
	else if(maxx>=mid && minn>=mid)
	{
		cout<<min(maxx,mid)+1<<endl;
	}
	else
	{
	 int x=min(minn,maxx);
	 int y=max(minn,maxx);
	 if(x=n-1-y)
	 {
	 	cout<<2*x+2<<endl;;
	 }
	 else if(x>n-1-y)
	 {
      step=x+1;
      j=x;
	 }

	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve()
}
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a[]={0,0,0,0};
	int n;
	cin>>n;
	int k;

	for(int i=0;i<n;i++)
	{
		cin>>k;
		a[k]++;

	}
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	cout<<n-max(a[1],max(a[2],a[3]));
}

// 0 1 2 3
// 0 - - -
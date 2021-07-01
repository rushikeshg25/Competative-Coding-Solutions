#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,i,min,sum=0;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}

   if(sum%2==0 || sum==0)
   {
   	cout<<sum;
   }
   else
   {
   	min=0x3f3f3f3f;
   	for(i=0;i<n;i++)
   	{
     if(min>a[i] && a[i]%2!=0)
     {
     	min=a[i];
     }
   	}
   	cout<<sum-min;
   }

}
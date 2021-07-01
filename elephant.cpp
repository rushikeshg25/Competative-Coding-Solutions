#include<iostream>
using namespace std;

int main ()
{
	int n,ans,x;
	cin>>n;
	
	x=n%5;
	ans=n/5;
	if(x==0)
	{
	cout<<ans;
 }
 else
 {
 	ans++;
 	cout<<ans;
 }
}

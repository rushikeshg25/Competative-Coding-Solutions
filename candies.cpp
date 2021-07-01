#include<iostream>
#include<cmath>
using namespace std;

int solve()
{
	int n,x;
	cin>>n;
	for(int k=2;k<30;k++)
	{
		int val=pow(2,k)-1;

		if(n%val==0)
		{
			x=n/val;
			cout<<x<<endl;
			break;
		}	
		}
	}
	

int main()
{
   int t;
   cin>>t;
   while(t--) solve();
	return 0;
}
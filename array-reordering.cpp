#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
	int t,n,i,j,c,x,b;

	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		

		b = sizeof(a) / sizeof(a[0]);
  
        sort(a, a + b, greater<int>());
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				x=gcd(a[i],2*a[j]);
             if(x>1)
             {
             	c++;
             }
			}
		}
		cout<<c<<endl;

	}
}

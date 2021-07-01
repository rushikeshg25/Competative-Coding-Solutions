#include <bits/stdc++.h>
using namespace std;


int countDigit(int n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}

int main()
{
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int l,r;
		int x=0;
		int diff,a,b;
		
		cin>>l>>r;
		diff=r-l;
         a=countDigit(l);
         b=countDigit(r);
        if(a==b)
        {
        	cout<<diff<<endl;
        }
        else
        {
        	
        	for(int i=l;i<=r;i++)
        	{
        		if(countDigit(i)<countDigit(i+1))
        		{
                x=x+countDigit(i+1);

        		}
        		else
        		{
                 x++;
        		}
        	}
        	cout<<x<<endl;
        }
	}
}

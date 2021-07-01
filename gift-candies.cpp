#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,a,b;
		cin>>x>>y>>a>>b;
		int a1=a,b1=b;
		 a=max(a,b);
		 b=min(a1,b1);
		int set=0;
		if(x<a || y<b)
			{
             cout<<"0"<<endl;
			}
			else
			{
		while(set=0;set>=0;set++)
		{
			if( (x>y && x>a)&&(y>b))
			{
				x=x-a;
				y=y-b;
             
             
			}
			else if((y>x && y>a) && x>b)
			{
               y=y-a;
               x=x-b;
			}
			else if((x<a && x<b )||(y<a && y<b) )
			{
				break;
			}

			
			
			
		}
	}
	cout<<set<<endl;
}
}


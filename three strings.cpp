#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,flag;
	
	cin>>t;
	string a,b,c;
	while(t--)
	{
		flag=0;
		cin>>a>>b>>c;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=b[i] || b[i]!=c[i])
			{
				flag=0;
			}
		}
		if(flag==1)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	}
	
}

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int r,i,j;
char lr;
string s;
cin>>lr;
cin>>s;
string a="qwertyuiopasdfghjkl;zxcvbnm,./";

for(i=0;i<s.size();i++)
{
	for(j=0;j<a.size();j++)
	{
		if(s[i]==a[j] && lr=='L')
		{
			s[i]=a[j+1];
		}
		else if(s[i]==a[j] && lr=='R')
		{
			s[i]=a[j-1];
		}
	}
}
cout<<s;	
}
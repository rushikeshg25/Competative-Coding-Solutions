#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t>0){
	
	for(int i=1;i<n;i++)
	{
	 	if(s[i-1]=='B' && s[i]=='G')
	 	{
	 		s[i]='B';
	 		s[i-1]='G';
	 		i++;
		 }
	}
	t--;
}
cout<<s;
}

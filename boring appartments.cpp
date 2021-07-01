#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	int t,dig,n;
	string x;
	cin>>t;
	while(t--){
		cin>>x;
		dig=x[0]-'0';
		n=x.size();
		cout<<(dig-1)*10+n*(n+1)/2<<endl;
	}
}


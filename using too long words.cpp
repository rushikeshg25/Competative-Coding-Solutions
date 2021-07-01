#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x;
	int n,t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>x;
		n=x.size();
		if(n>10){
			cout<<x[0]<<n-2<<x[n-1]<<endl;
		}
		else{
			cout<<x<<endl;
		}
	}
	
}

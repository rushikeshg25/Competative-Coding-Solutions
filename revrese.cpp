#include<iostream>
#include<string>
using namespace std;

int main(){
	string x,y;
	cin>>x>>y;
	int flag;
	int n=x.size();
	for(int i=0,j=n-1;i<n && j>=0;i++,j--)
	{
		if(x[i]!=y[j])
		{
			flag=1;
		}
	}
	if(flag==1){
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
}

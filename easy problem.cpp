#include<iostream>
using namespace std;

int main ()
{
	int n,flag=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"Hard";
	}
	else{
		cout<<"Easy";
	}
}

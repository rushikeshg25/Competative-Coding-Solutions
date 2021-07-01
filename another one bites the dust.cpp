#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int a,b,c,minimum;
	cin>>a>>b>>c;
	int result=0;
	minimum=min(a,b);
	
	result=2*c+(2*minimum)+1;
	cout<<result;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	cout<<endl;
	if(a>b && a<c)
	{
	    cout<<a;
	}
	else if(b>a && b<c)
	{
	    cout<<b;
	}
	else
	{
	    cout<<c;
	}
	return 0;
}


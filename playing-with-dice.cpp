#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a,b;
	cin>>a>>b;
	int wa=0,wb=0,draw=0;
	for(int i=1;i<=6;i++)
	{
		if(abs(a-i)<abs(b-i))
		{
         wa++;
		}
		 else if(abs(a-i)==abs(b-i))
		{
         draw++;
		}
		else
		{
         wb++;
		}
	}
	cout<<wa<<" "<<draw<<" "<<wb<<endl;
}
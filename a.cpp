#include<iostream>
using namespace std;

int main()
{
	int withdraw;
	float initial;
	cin>>withdraw>>initial;
	if(initial+0.5>=withdraw && withdraw%5==0)
	{
		cout<<initial-withdraw-0.05;
	}
	else
	{
		cout<<initial;
	}
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int a,b,c,t;
	if(a+b>c && b+c>a && a+c>b)
	{
		cout<<"0";
	}
	else{
		t=min(a,b,c);
		for(int i=0;i<100;i++)
		{
			t=t+i;
			
			if(a+b>c && b+c>a && a+c>b)
	        {
		    cout<<i;
	        }
		}
		
	}
}

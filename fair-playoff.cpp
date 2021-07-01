#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,rm1,rm2,m1,m2;
	m1=m2;
	m2=0;
	rm1=rm2;
	rm2=0;
	cin>>t;
	int a[4];
	while(t--)
	{
    for(i=0;i<4;i++)
    {
     cin>>a[i];
    }
    if(a[0]>a[1])
    {
    m1=a[0];
    }
    else{
    m1=a[1];
    }
    m1=a[0]>a[1]?a[0]:a[1];
    m2=a[2]>a[3]?a[2]:a[3];

    for(i=0;i<4;i++)
    {
     if(a[i]>rm1)
     {
     	rm1=a[i];
     }
    }
    for(i=0;i<4;i++)
    {
    	if(a[i]>rm2 && a[i]<rm1)
    	{
    		rm2=a[i];
    	}
    }
    if((m1==rm1 || m1==rm2 ) && (m2==rm1 || m2==rm2))
    {
    	cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
    }
}
}

	
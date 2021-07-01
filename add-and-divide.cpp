#include<iostream>
using namespace std;

int  main()
{
	int t,a,b,count;
	cin>>t;
	while(t--)
	{
		count=0;
        cin>>a>>b;
        for(count;a!=0;count++)
        {
        	if(b==1 or a==b)
        	{
        		b++;
        		count++;
        	}
        	a=a/b;
        	count++;



        }
        cout<<count<<endl;



	}
}
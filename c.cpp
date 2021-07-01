#include <bits/stdc++.h>
using namespace std;
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
int main()
{
    
    int T;
    cin >> T;
    while (T--) {
        int i,n,m=0,avg=0,sum=0,j,k;
        cin >> n;
        int a[n];
        FOR(i, n)
        cin >> a[i];
        avg=avg+a[i];
        if(a[i]>m)
        {
        	m==a[i];
        }
        m=m/2;
        avg=avg/n;
        if(avg<=m)
        {
        FOR(i, n)
        {
        	if(a[i]>1)
        	{
        		sum=sum+(a[i]-1);
        	}
        	else if(a[i]==1)
        	{
        		sum=sum+1;
        	}
        	
        

        }
        cout<<sum+2<<endl;
    }
        else

        {
        	FOR(i, n)
        {

        	if(a[i]==0)
        	{
        	 j=i;
        	 break;
        	}
        	

        }
        for(int z=n;z>j;z++)
        {
        	k=z;
        	break;
        }
        for(i=j+1;i<k;i++)
        {
          sum=sum+(m*2)-a[i];
        }
        cout<<sum+j+k<<endl;

    }
    return 0;

}
}


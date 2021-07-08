#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fr(i,a,b) for(ll i=a;i<b;i+=1)
#define fre(i,a,b) for(ll i=a;i<=b;i+=1)
#define rfre(i,a,b) for(ll i=a;i>=b;i-=1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define tt ll tc;cin>>tc;while(tc--)
int main()
{
    fastio;
    tt{
        string s,t;cin>>s>>t;
        ll l1=(ll)s.size();
        ll l2=(ll)t.size();
        if(l1==l2){
            if(s!=t)
            cout<<-1<<"\n";
            else
            cout<<s<<"\n";
        }
        else{
            ll g=__gcd(l1,l2);
            ll lcm=(l1*l2)/g;
            string str1=s;
            string str2=t;
            ll s1=lcm/l1;
            s1-=1;
            ll s2=lcm/l2;
            s2-=1;
            fre(i,1,s1)
            s+=str1;
            fre(i,1,s2)
            t+=str2;
            if(s==t)
            cout<<s<<"\n";
            else
            cout<<-1<<"\n";
        }
    }
    return 0;
}
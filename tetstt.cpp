#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,4,6,7,3,0};
    sort(a,a+size(a));

    for(int i=0;i<size(a);i++)
    {
        cout<<a[i]<<endl;
    }
}
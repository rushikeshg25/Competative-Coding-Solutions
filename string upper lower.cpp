#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int lower,upper=0;
	int x;
	for(int i=0;i<s.size();i++)
	{
	   x=s[i];
	   if(x>=97 && x<=122)
	   {
	   	lower++;
		   }
		else
		{
			upper++;
			}	
	}
	if(upper>lower){
      transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
}
 else{
 
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
}	}


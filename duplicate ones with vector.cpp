#include<iostream>
#include<vector>
using namespace std;

int main (){
	int n,a;
	vector<int> v(n);
	for(int i=0;i<n;i++)
{
	cin>>a;
	v.push_back(a);
}
cout<<v.begin();
//for(int j=v.begin();j!=v.end();++j)
//{
//	cout<<j;
//}
}

#include<vector>
#include<iostream>
using namespace std;

int main()
{
	vector<int> a {1 ,2 ,3 ,4 ,5};
	

	auto k=a.begin();
	auto l=a.end()-1;
	cout<<*k<<" "<<*l;
	//for(auto j=a.begin();j!=a.end();j++)
	//{
	//	cout<<*j<<endl;
	//}
	return 0;
}
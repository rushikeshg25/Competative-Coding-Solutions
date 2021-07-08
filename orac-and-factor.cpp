#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F ff
#define S ss
#define PB push_back
#define POB pop_back
#define MP make_pair


int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n,k;
		cin >> n >> k;
		if(n%2==0)
		{
			cout << n+2*k << endl;
			continue;
		}
		int p = 0;
		for(int i = n; i>=2; i--)
			if(n%i==0)
		    	p = i;
		cout << n+p+2*(k-1) << endl;
	}
	return 0;
}

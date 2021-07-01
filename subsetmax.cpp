#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

typedef long long lint;
typedef pair<int, int> pii;

const int P = 1e9 + 7; // or 998244353;
const int INF = 0x3f3f3f3f;
const lint LL_INF = 0x3f3f3f3f3f3f3f3f;

int main()
{
	int T;
	scanf("%d", &T);

	while (T--) {
		int n, m, i, j, k;
		scanf("%d", &n);
		int cnt[103];
		memset(cnt, 0, sizeof(cnt));
		for (i = 0; i < n; ++i) {
			scanf("%d", &k);
			cnt[k]++;
		}
		int x = 0, y = 0;
		for (i = 0; i < 101; ++i)
			if (cnt[i] < 2) { x = i; break; }
		if (!cnt[x]) y = x;
		else {
			for (i = x+1; i < 101; ++i)
				if (cnt[i] < 1) {y = i; break;}
		}
		printf("%d\n", x+y);
		
	}

	return 0;
}
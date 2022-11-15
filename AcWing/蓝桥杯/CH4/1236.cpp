#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 100010;
int a[N], b[N], c[N];
long long n, ans;

int bsr(int l, int r, int x)
{
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (c[mid] >= x) r = mid;
		else l = mid + 1;
	}
	return l;
}

int bsl(int l, int r, int x)
{
	while (l < r)
	{
		int mid = (l + r + 1) >> 1;
		if (a[mid] <= x) l = mid;
		else r = mid - 1;
	}
	return r;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(), cout.tie();
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];
	for (int i = 1; i <= n; i++) cin >> c[i];
	sort(a+1, a + 1 + n);
	// sort(b+1, b + 1 + n);
	sort(c+1, c + 1 + n);
	for (int i = 1; i <= n; i++)
	{
		int sa = bsl(1, n, b[i]);
		while (a[sa] >= b[i]) sa--;
		int sc = bsr(1, n, b[i]);
		while (c[sc] <= b[i]) sc++;
		if (sc > n) sc = 0;
		else sc = n-sc+1;
		cout << sa << " " << sc << endl;
		ans += sa * sc;
	}
	cout << ans;
	return 0;
}


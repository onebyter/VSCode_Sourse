#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

LL a, b;
int x, cnt, ans;
LL g[500010];

bool th(LL t)
{
	LL l = 0, r = t - 1;
	while (l < r)
	{
		LL mid = l + r >> 1;
		if (mid * mid * mid >= t)
			r = mid;
		else
			l = mid + 1;

	}
	if (l * l * l == t)
		return true;
	return false;
}

int main()
{
	cin >> a >> b >> x;
	for (int i = a; i <= b; i++)
	{
		if (th(i))
			g[cnt++] = i;

	}
	for (int i = 0; i < cnt; i++)
	{
		if (g[i] % x == 0) ans++;
	}
	cout << ans;
	return 0;
}


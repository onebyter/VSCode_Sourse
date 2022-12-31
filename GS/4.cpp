#include <bits/stdc++.h>

using namespace std;

int n;
int a, b;
int x[10010];
int ans;

int main()
{
	cin >> n >> a >> b;
	for (int i = 0; i <= n; i += a)
	{
		if (x[i] == 0)
		{
			x[i] = 1;
			ans++;
		}
	}
	for (int i = n; i >= 0; i -= b)
	{
		if (x[i] == 0)
		{
			x[i] = 1;
			ans++;
		}
	}
	cout << ans;
	return 0;
}

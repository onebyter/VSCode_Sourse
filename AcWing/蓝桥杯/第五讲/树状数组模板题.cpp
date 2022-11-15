#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 100010;
int a[N], tr[N];
int n, m;
int lowbit(int x)
{
	return x & -x;
}

void add(int x, int c)
{
	for (int i = x; i <= n; i += lowbit(i))
		tr[i] += c;
}

int query(int x)
{
	int s = 0;
	for (; x; x -= lowbit(x))
		s += tr[x];
	return s;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(), cout.tie();
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		add(i, a[i]);
	}
	int o, x, y;
	while (m--)
	{
		cin >> o >> x >> y;
		if (o) add(x, y);
		else cout << query(y) - query(x-1) << "\n";
	}
	return 0;
}

